//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//Back-end complete function Template for C++

class Solution{
    public:
    unordered_map<string,bool>mp;
    bool isScramble(string S1, string S2){
        if(S1.length() != S2.length()) return false;
        int n = S1.length();
        return solve(S1,S2,n);
    } 
    bool solve(string s1, string s2, int n) {
        if(s1==s2){
            return mp[s1+"#"+s2] = true;
        }
        else if(s1.length()==1) return false;
        
        else if(mp.find(s1+"#"+s2) != mp.end()) return mp[s1+"#"+s2];
        
        for(int k=1;k<=n-1;k++) {
            bool cond1 = solve(s1.substr(0,k),s2.substr(0,k),k)
            && solve(s1.substr(k,n-k),s2.substr(k,n-k),n-k);
            bool cond2 = solve(s1.substr(0,k),s2.substr(n-k),k)
            && solve(s1.substr(k,n-k),s2.substr(0,n-k),n-k);
            
            if(cond1 ||cond2) return mp[s1+"#"+s2] = true;
        }
        return mp[s1+"#"+s2] = false;
        
    }  
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        string S1, S2;
        cin>>S1>>S2;
        Solution ob;
        
        if (ob.isScramble(S1, S2)) {
            cout << "Yes";
        }
        else {
            cout << "No";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends