//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
     void maze( vector <vector<int> > &arr,int r,int c,int row,int col,string &temp,vector <string> &ans,vector <vector <int> > &visit){
     if(r==row-1 && c==col-1){
        ans.push_back(temp);
        return;
     }


    //up direction
    if(r-1 >=0 && visit[r-1][c] ==0 && arr[r-1][c] == 1){
        visit[r-1][c] = 1;
        temp.push_back('U');
        maze(arr,r-1,c,row,col,temp,ans,visit);
        temp.pop_back();
        visit[r-1][c] = 0;
    }
    //down direction

    if(r+1 <row && visit[r+1][c] ==0 && arr[r+1][c] == 1){
        visit[r+1][c] = 1;
        temp.push_back('D');
        maze(arr,r+1,c,row,col,temp,ans,visit);
        temp.pop_back();
        visit[r+1][c] = 0;
    }
    //left
    if(c-1 >=0 && visit[r][c-1] ==0 && arr[r][c-1] == 1){
        visit[r][c-1] = 1;
        temp.push_back('L');
        maze(arr,r,c-1,row,col,temp,ans,visit);
        temp.pop_back();
        visit[r][c-1] = 0;
    }
    //right
    if(c+1 <col && visit[r][c+1] ==0 && arr[r][c+1] == 1){
        visit[r][c+1] = 1;
        temp.push_back('R');
        maze(arr,r,c+1,row,col,temp,ans,visit);
        temp.pop_back();
        visit[r][c+1] = 0;
    }
}

    vector<string> findPath(vector<vector<int>> &arr) {
        // Your code goes here
     int row = arr.size();
    int col = arr[0].size();
    string temp;
    vector <string> ans;
    vector <vector <int> > visit(row,(vector <int> (col,0)));

    if (arr[0][0] == 1 && arr[row - 1][col - 1] == 1) {
        visit[0][0] = 1;
        maze(arr, 0, 0, row, col, temp, ans, visit);
    }
    
    return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends