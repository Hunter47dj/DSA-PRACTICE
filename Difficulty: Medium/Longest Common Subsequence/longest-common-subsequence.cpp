//{ Driver Code Starts
#include <bits/stdc++.h>
const int mod = 1e9 + 7;
using namespace std;


// } Driver Code Ends
// function to find longest common subsequence

class Solution {
  public:
    // Function to find the length of longest common subsequence in two strings.
      int solve1(int n,int m,string str1, string str2,int ind1,int ind2)
    {
      //  base case
      if(ind1>=n || ind2>=m)
      return 0;
      int incl=0,excl=0;
      if(str1[ind1]==str2[ind2])
      incl=1+solve1(n,m,str1,str2,ind1+1,ind2+1);
      else
      excl=max(solve1(n,m,str1,str2,ind1+1,ind2),solve1(n,m,str1,str2,ind1,ind2+1));
      return max(incl,excl);
    }
        //   memoization
    int solve2(int n,int m,string &str1, string &str2,int ind1,int ind2, vector<vector<int>>&dp)
    {
      //  base case
      if(ind1>=n || ind2>=m)
      return 0;
      if(dp[ind1][ind2]!=-1)
      return dp[ind1][ind2];
      int incl=0,excl=0;
      if(str1[ind1]==str2[ind2])
      incl=1+solve2(n,m,str1,str2,ind1+1,ind2+1,dp);
      else
      excl=max(solve2(n,m,str1,str2,ind1+1,ind2,dp),solve2(n,m,str1,str2,ind1,ind2+1,dp));
      return dp[ind1][ind2]=max(incl,excl);
    }
        //   tabulation
    int solve3(int n,int m,string &str1, string &str2)
    {
      vector<vector<int>>dp(n+1,vector<int>(m+1,0));
      for(int i=1;i<=n;i++)
      {
          for(int j=1;j<=m;j++)
          {
            if(str1[i-1]==str2[j-1])
            dp[i][j]=1+dp[i-1][j-1];
            else
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
          }
      }
     return dp[n][m];
    } 
  public:
    // Function to find the length of longest common subsequence in two strings.
    int lcs(int n, int m, string str1, string str2) 
    {
     int ind1=0;
     int ind2=0;
        //   recursion   --->Gives TLE
    //  return solve1(n,m,str1,str2,ind1,ind2);
     
        //  memoization --->optimation
    //  vector<vector<int>>dp(n,vector<int>(m,-1));
    //  return solve2(n,m,str1,str2,ind1,ind2,dp);
        
        // tabulation     --->optimization
    return solve3(n,m,str1,str2);    
    }
};


//{ Driver Code Starts.
int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m; // Take size of both the strings as input
        string str1, str2;
        cin >> str1 >> str2; // Take both the string as input
        Solution ob;
        cout << ob.lcs(n, m, str1, str2) << endl;
    }
    return 0;
}

// } Driver Code Ends