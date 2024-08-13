//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution{
    public:
    bool solve(string &s1, string &s2, int i, int j){
        if(i == s1.length() and j == s2.length()) return true;
        if(i < s1.length() and j == s2.length() ) return false;
        if(i == s1.length() and j < s2.length() ){
            for(int k=j; k<s2.length();++k){
                if(s2[k] != '*'){
                    return false;
                }
            }
            return true;
        }
        if(i < s1.length() && (s1[i] == s2[j] || s2[j] == '?')){
            return solve(s1, s2, i+1, j+1);
        }
        else if(j < s2.length() && s2[j] == '*'){
            return (solve(s1, s2, i+1, j) || solve(s1, s2, i, j+1));
        }
        else return false;
    }
    bool match(string wild, string pattern)
    {
        return solve(pattern, wild, 0, 0);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        string wild, pattern;
        cin>>wild>>pattern;
        
        Solution ob;
        bool x=ob.match(wild, pattern);
        if(x)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
    return 0;
}
// } Driver Code Ends