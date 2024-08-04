//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
	bool solve(int arr[], int i, int n,vector<vector<int>>&dp){
      if(i==0){
          return true;
      }
      if(n==0){
          return false;
      }
      if(dp[n][i]!=-1){
          return dp[n][i];
      }
      if(arr[n-1]<=i){
          return dp[n][i]=(solve(arr,i-arr[n-1],n-1,dp)||solve(arr,i,n-1,dp));
      }else{
          return dp[n][i]=solve(arr,i,n-1,dp);
      }
  }
  
    int minDifference(int arr[], int n)  { 
        int range=0;
        for(int i=0;i<n;i++){
            range+=arr[i];
        }
        vector<bool>chk(range/2,false);
        vector<vector<int>>dp(n+1,vector<int>(range/2+1,-1));
        for(int i=0;i<=range/2;i++){
            chk[i]=solve(arr,i,n,dp);
        }
        int ans=INT_MAX;
        int temp=INT_MAX;
        for(int i=0;i<=chk.size();i++){
            if(chk[i]==true){
                temp=range-2*i;
            }
            ans=min(ans,temp);
        }
        return ans;

}
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends