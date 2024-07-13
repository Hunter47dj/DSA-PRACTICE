#include<iostream>
using namespace std;

#include <bits/stdc++.h>
bool iscyclicBFS(unordered_map<int,list<int>> &adj, unordered_map<int,bool> visited, int node )
{
    queue<int> q;

    unordered_map<int,int> parent;
    parent[node] = -1;

    q.push(node);
    visited[node] = true;

    while( !q.empty())
    {
        int front = q.front();
        q.pop();

        for(auto neighbour: adj[front])
        {
            if(visited[neighbour] == true && neighbour != parent[front])
            {
                return true;
            }
            
            else if(!visited[neighbour])
            {
                q.push(neighbour);
                visited[neighbour] = true;
                parent[neighbour] = front;
            }
        }

    }

    return false;
}

string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // Write your code here.
    //creating adjList
    unordered_map<int,list<int>> adj;
    for(int i=0; i<m; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }


    unordered_map<int,bool> visited;
    bool check;
    for(int i=0; i<n; i++)
    {
        if(!visited[i])
        {
            check = iscyclicBFS(adj,visited,i);
            if(check == true)
                return "Yes";
        }
    }

    return "No";
}


int main()
{ 
return 0;
}