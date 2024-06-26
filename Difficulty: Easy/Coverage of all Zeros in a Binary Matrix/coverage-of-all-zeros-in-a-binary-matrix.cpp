//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int findCoverage(vector<vector<int>>& matrix) {
        // Code here
          int row=matrix.size(), col= matrix[0].size();
        int ans =0;
        for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
        if(matrix[i][j]==0) {
            if(i>0)
            if(matrix[i-1][j]==1) ans++;
            if(j>0)
            if(matrix[i][j-1]==1) ans++;
            if(j<col-1)
            if(matrix[i][j+1]==1) ans++;
            if(i<row-1)
            if(matrix[i+1][j]==1) ans++;
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        int ans = obj.findCoverage(matrix);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends