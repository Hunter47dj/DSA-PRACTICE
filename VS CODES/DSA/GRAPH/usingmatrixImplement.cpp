// question from codingninja
// https://www.naukri.com/code360/problems/create-a-graph-and-print-it_1214551?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&leftPanelTabValue=SUBMISSION

#include<bits/stdc++.h>

vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) {
    // Write your code here.

    vector<int> ans[n];    // matrics jiska row fixed h pr no. of columns variable h . for us col = 2
    for(int i=0; i<m; i++)
    {
        int u = edges[i][0];  // matrix ka first column
        int v = edges[i][1];  // matrix ka second column


        ans[u].push_back(v);  
        ans[v].push_back(u);   // undirected
    }

    vector<vector<int>> adj(n);

    for(int i =0; i< n; i++)
    {
        adj[i].push_back(i);

        for(int j=0; j< ans[i].size(); j++)
        {
            adj[i].push_back(ans[i][j]);
        }
    }
    return adj;


}