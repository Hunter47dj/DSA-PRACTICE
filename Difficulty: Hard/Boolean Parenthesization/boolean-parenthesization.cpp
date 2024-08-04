//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

int dp[2][201][201];
const int MOD=1003;
class Solution{
public:
    int countWays(int n, string &s){
      memset(dp,0,sizeof dp);
      for(int i=1;i<=n;i++){
         dp[1][i][i]=(s[i-1]=='T');
         dp[0][i][i]=(s[i-1]=='F');
      }
        for(int i=n;i>=1;i--){
            for(int j=i;j<=n;j++){
                for(int k=i+1;k<j;k++){
                    for(auto &x:{'|','&','^'}){
                        if(x==s[k-1]){
                           for(auto &f:{0,1}){
                              for(auto &s:{0,1}){
                                 if(x=='|'){
                                    (dp[f|s][i][j]+=dp[f][i][k-1]*dp[s][k+1][j])%=MOD;
                                 }
                                 if(x=='&'){
                                    (dp[f&s][i][j]+=dp[f][i][k-1]*dp[s][k+1][j])%=MOD;
                                 }
                                 if(x=='^'){
                                    (dp[f^s][i][j]+=dp[f][i][k-1]*dp[s][k+1][j])%=MOD;
                                 }
                              }
                           }
                        }
                    }
                }
                dp[0][i][j]%=MOD;
                dp[1][i][j]%=MOD;
            }
        }
        return dp[1][1][n];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.countWays(n, s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends