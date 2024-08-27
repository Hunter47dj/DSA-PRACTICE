//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
   void dfs(int node, int& end, vector<pair<int,int>>g[], int&mini, int vis[]) {
        vis[node] = 1;
        for(auto it: g[node]) {
            if(!vis[it.first]) {
                mini = min(mini,it.second);
                end = it.first;
                dfs(it.first,end,g,mini,vis);
            }
        }
    }
    vector<vector<int>> solve(int n,int p,vector<int> a,vector<int> b,vector<int> d)
    {
        int vis[n+1] = {0};
        vector<vector<int>>ans;
        vector<int>out(n+1,0);
        vector<int>in(n+1,0);
        vector<pair<int,int>>g[n+1];
        for(int i=0;i<p;i++) {
            out[a[i]] = 1;
            in[b[i]] = 1;
            g[a[i]].push_back({b[i],d[i]});
        }
        for(int i=1;i<=n;i++) {
            if(out[i] == 1 && in[i] == 0 && vis[i] == 0) {
                int s = i;
                int e;
                int mini = INT_MAX;
                dfs(i,e,g,mini,vis);
                ans.push_back({s,e,mini});
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main()
{
	int t,n,p;
	cin>>t;
	while(t--)
    {
        cin>>n>>p;
        vector<int> a(p),b(p),d(p);
        for(int i=0;i<p;i++){
            cin>>a[i]>>b[i]>>d[i];
        }
        Solution obj;
        vector<vector<int>> answer = obj.solve(n,p,a,b,d);
        cout<<answer.size()<<endl;
        for(auto i:answer)
        {
            cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<endl;
        }
        
    }
	return 0;
}
// } Driver Code Ends