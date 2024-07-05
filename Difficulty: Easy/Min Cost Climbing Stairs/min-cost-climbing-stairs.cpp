//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//Back-end complete function Template for C++

class Solution {  // here cnt means the current step u r currently standing
  public:
  
   int solve(int n, vector<int>&cost, vector<int> &dp)
    {
        //base case
        if(n==1)
            return cost[1];
        if(n==0) 
            return cost[0];
            
        
        if(dp[n] != -1)
            return dp[n];
        
        dp[n] = min(solve(n-1, cost, dp) , solve(n-2, cost, dp)) + cost[n];
        
        return dp[n];
    }
  
    int minCostClimbingStairs(vector<int>&cost ,int N) {
        //Write your code here
        vector<int> dp(N+1,-1);
        // int cnt =0;
        
        int ans = min(solve(N-1, cost, dp) , solve(N-2, cost, dp));
        
        // ans = ans - cost[0];
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>cost(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>cost[i];
        }

        Solution ob;
        cout<<ob.minCostClimbingStairs(cost,N);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends