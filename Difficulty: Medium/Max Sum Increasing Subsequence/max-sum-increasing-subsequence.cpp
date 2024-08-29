//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	 int solve(int index, int prev, int arr[], int n, vector<vector<int>>& dp) {
        if (index == n) {
            return 0;
        }
        
        if (dp[index][prev + 1] != -1) {
            return dp[index][prev + 1];
        }
        
       
        int not_taken = solve(index + 1, prev, arr, n, dp);
        
     
        int taken = 0;
        if (prev == -1 || arr[prev] < arr[index]) {
            taken = arr[index] + solve(index + 1, index, arr, n, dp);
        }
        
        
        int ans = max(not_taken, taken);
        
        // Memoize the result and return
        return dp[index][prev + 1] = ans;
    }
    
    int maxSumIS(int arr[], int n) {  
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
        return solve(0, -1, arr, n, dp);
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
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends