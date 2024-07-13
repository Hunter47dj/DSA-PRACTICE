#include<bits/stdc++.h>
using namespace std;
// https://www.naukri.com/code360/problems/dfs-traversal_630462?leftPanelTab=0&leftPanelTabValue=SUBMISSION

void dfs(int node,unordered_map<int,list<int>> &adj, unordered_map<int,bool> &visited, vector<int> &component)
{
    component.push_back(node);
    visited[node] = true;

    for(auto i : adj[node])
    {
        if(!visited[i])
        {
            dfs(i,adj,visited,component);
        }
    }
}


vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    // step 1 create adj list
    unordered_map<int,list<int>> adj;

    for(int i=0; i<edges.size(); i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // step 2 for not visited  call dfs;
    unordered_map<int,bool> visited;
    vector<vector<int>> ans;


    for(int i=0; i< V; i++)
    {
        if(!visited[i])
        {
            vector<int> component;
            dfs(i,adj,visited,component);
            ans.push_back(component);
        }

    }
    // step 3 return ans;
    return ans;
}

int main()
{ 
return 0;
}