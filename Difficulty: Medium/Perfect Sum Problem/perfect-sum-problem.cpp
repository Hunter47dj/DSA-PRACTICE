//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	  int mod = 1e9+7;
    int f(vector<vector<int>>&dp,int arr[], int n, int sum,int i,int count){
        if(sum==0 && i==n){
            return count+1;
        }
        
        if(sum<0 || i==n)
            return 0;
        
        if(dp[i][sum]!=-1)
            return dp[i][sum];
        
        
        
        int notTake=f(dp,arr,n,sum,i+1,count);
        int take=0;
        if(arr[i]<=sum)
            take=f(dp,arr,n,sum-arr[i],i+1,count);
        
        return dp[i][sum]=(notTake+take)%mod;
    }
    
    int perfectSum(int arr[], int n, int sum)
    {
        vector<vector<int>> dp(n, vector<int>(sum + 1, -1));
        return f(dp,arr,n,sum,0,0);
    }
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends