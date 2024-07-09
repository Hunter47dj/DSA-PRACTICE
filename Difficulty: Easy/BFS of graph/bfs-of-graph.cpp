//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    
    void bfs(vector<int> adj[], unordered_map<int,bool> &visited,vector<int> &ans, int node)
{
    queue<int> q;
    q.push(node);

    visited[node] = true; // this vertix is visted

    while(!q.empty())
    {
        // take out element from queue
        int front = q.front();
        q.pop();

        // store it in the ans
        ans.push_back(front);

        // mark the front visited 
        visited[front] = true;

        // take the neighbouring vertices and put them in queue

        for(auto i : adj[front])
        {
            if(!visited[i])
            {
                q.push(i);
                // mark the node visited 
                visited[i] = true;
            }
        }
    }
}

    
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        unordered_map<int,bool> visited;
        vector<int> ans;
    
    
            if(!visited[0])    // not taking for loop as q. has asked for nodes traversed from 0 only
            {
                bfs(adj,visited,ans,0);
            }
        
    
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends