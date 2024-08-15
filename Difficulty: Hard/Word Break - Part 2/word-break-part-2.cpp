//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    unordered_set<string> st;
vector<string> res;
void solve(int i, string &s, string &sen)
{
    if (i >= s.size())
    {
        res.push_back(sen);
        return;
    }
    for (int j = i; j < s.size(); j++)
    {
        string temp = s.substr(i, j - i + 1);
        if (st.find(temp) != st.end())
        {
            string str = sen;
            if (!sen.empty())
            {
                sen += " ";
            }
            sen += temp;
            solve(j + 1, s, sen);
            sen = str;
        }
    }
}
vector<string> wordBreak(int n, vector<string> &dict, string s)
{
    for (string &str : dict)
    {
        st.insert(str);
    }
    string sen = "";
    solve(0, s, sen);
    return res;
}
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<string> dict;
        string s;
        cin>>n;
        for(int i = 0;i < n;i++){
            cin>>s;
            dict.push_back(s);
        }
        cin>>s;
        
        Solution ob;
        vector<string> ans = ob.wordBreak(n, dict, s);
        if(ans.size() == 0)
            cout<<"Empty\n";
        else{
            sort(ans.begin(), ans.end());
            for(int i = 0;i < ans.size();i++)
                cout<<"("<<ans[i]<<")";
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends