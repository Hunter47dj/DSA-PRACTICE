#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// here we are finding the shortest distance of all nodes from source in a weighted directed acyclic graph
// approach :
// 1. find topological sort using dfs  - store in stack
// then using this stack calculate the distance

class graph
{
    public:
        map<int,list<pair<int,int>>> adj;      // pair storing neighbour and weight

        void addEdge(int u, int v, int weight)
        {
            pair<int,int> p = make_pair(v,weight);

            adj[u].push_back(p);
        }

        void printGraph()
        {
            for(auto i : adj)
            {
                cout<<i.first<<"-> ";
                for(auto j : i.second)
                {
                    cout<<"[ "<<j.first<<","<<j.second<<"],";
                }
                cout<<endl;
            }
        }

        // this is used to update the stack to topological sort order
        void dfs(int node, unordered_map<int,bool> &visited, stack<int> &st)
        {
            // st.push(node);
            visited[node] = true;

            for(auto i : adj[node])
            {
                if(!visited[i.first])    // i is pair so use first element
                {
                    dfs(i.first,visited,st);
                }
            }

            st.push(node);
        }
};



int main()
{ 
    graph g;
    g.addEdge(0,1,5);
    g.addEdge(0,2,3);
    g.addEdge(1,2,2);
    g.addEdge(1,3,6);
    g.addEdge(2,3,7);
    g.addEdge(2,4,4);
    g.addEdge(2,5,2);
    g.addEdge(3,4,-1);
    g.addEdge(4,5,-2);

    g.printGraph();

    // topological sort
    int n=6; // no. of nodes
    unordered_map<int,bool> visited;
    stack<int> st;

    for(int i=0; i<n; i++)
    {
        if(!visited[i])
        {
            g.dfs(i,visited,st);
        }
    }

    // calculating the distance from source to each node

    int src = 1; // source node

    vector<int> dist(n,INT_MAX);  // array to store the distance

    dist[src] = 0; // setting the distance for source to source

    for(int i =0; i<n; i++)
    {
        int top = st.top();
        st.pop();

        if(dist[top] != INT_MAX)
        {
            for(auto j : g.adj[top])
            {
                int calc = j.second + dist[top];
                if(calc < dist[j.first])
                {
                    dist[j.first] = calc;
                }
            }
        }
    }

    cout<<endl;

    for (auto i : dist)
    {
        cout<<i<<" ";
    }
    

return 0;
}