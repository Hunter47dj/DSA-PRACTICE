//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define MOD 1000000007
class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    
    long long solve(int n, int cnt, vector<long long>& dp)
    {
        //base case
        if(cnt == n)
        {
            return 1;
        }
        if(cnt > n)
        {
            return 0;
        }
        
        
        if(dp[cnt] != -1)
        {
            return dp[cnt];
        }
        
        dp[cnt] = (solve(n,cnt+1, dp) %MOD + solve(n,cnt+2, dp) %MOD + solve(n,cnt+3, dp) %MOD ) %MOD;
        return dp[cnt];
    }
    
    long long countWays(int n)
    {
        
        // your code here
        int cnt =0;
        vector<long long> dp(n+1, -1);
        long long ans = solve(n, cnt, dp);
        
        return ans;
        
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends