class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        // take transpose of matrix by swapping arr[i][j] by arr[j][i]
        int row= matrix.size();
        int col= matrix[0].size();

        for(int i=0 ; i<row; i++)
        {
            for(int j=0; j<=i; j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        // after this interchange first and third column 

        for(int i=0; i<row; i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
};