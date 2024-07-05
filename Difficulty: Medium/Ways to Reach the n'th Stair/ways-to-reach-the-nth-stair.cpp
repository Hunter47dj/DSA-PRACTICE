//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define MOD 1000000007
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    
    int solve(int n, int cnt, vector<int> &dp)
    {
        //base case
        if(cnt == n)
            return 1;
        if(cnt > n) 
            return 0;
        
        if(dp[cnt] != -1)
            return dp[cnt];
        
        dp[cnt] = (solve(n,cnt+1, dp) % MOD + solve(n,cnt+2, dp) % MOD) % MOD;
        
        return dp[cnt];
    }
    
    int countWays(int n)
    {
        // your code here
        vector<int> dp(n+1,-1);
        int cnt =0;
        
        return solve(n, cnt, dp);
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends