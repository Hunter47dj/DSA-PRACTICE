#include<iostream>
using namespace std;
// https://www.naukri.com/code360/problems/bfs-in-graph_973002?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&leftPanelTabValue=SUBMISSION

#include<unordered_map>
#include <queue>
#include<vector>

void bfs(vector<vector<int>> &adj, unordered_map<int,bool> &visited,vector<int> &ans, int node)
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

vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    // Write your code here.
    unordered_map<int,bool> visited;
    vector<int> ans;


        if(!visited[0])    // not taking for loop as q. has asked for nodes traversed from 0 only
        {
            bfs(adj,visited,ans,0);
        }
    

    return ans;

}

int main()
{ 
return 0;
}