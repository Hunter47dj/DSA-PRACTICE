#include<iostream>
#include<vector>
using namespace std;



void spiralOrder(vector<vector<int>>& matrix) 
{
    
    // vector<int> ans;

    int row=matrix.size();
    int col=matrix[0].size();

    int count=0;
    int totalElements= row*col;
    
    //    basic initializations 
    int startingRow=0;
    int startingCol=0;
    int endingRow=row-1;
    int endingCol=col-1;
    
    
    while(count < totalElements)
    {
        // printing starting row
        for(int i=startingCol; count < totalElements && i<=endingCol; i++)
        {
            cout<<matrix[startingRow][i]<<" ";
            // ans.push_back(matrix[startingRow][i]);
            count++;
        
        }
        startingRow++;

        // printing ending column 
        for(int i=startingRow; count < totalElements && i<=endingRow; i++)
        {
            cout<< matrix[i][endingCol]<<" ";
            // ans.push_back(matrix[i][endingCol]);
            count++;
        }
        endingCol--;

        //printing ending row 
        for(int i=endingCol; count < totalElements && i>=startingCol; i--)
        {
            cout<<matrix[endingRow][i] <<" ";
            // ans.push_back(matrix[endingRow][i]);
            count++;
        
        }
        endingRow--;

        //printing starting col

        for(int i =endingRow; count < totalElements && i>= startingRow; i--)
        {
            cout<< matrix[i][startingCol]<<" ";
            // ans.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++;          
    }
    
    // return ans;
}



int main()
{ 
    vector<vector<int>> matrix ={{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    spiralOrder(matrix);

    // 1 2 3 4
    // 5 6 7 8
    // 9 10 11 12

    // 1 2 3 4, 8 12 ,11 10 9, 5, 6 7 last col,row ko skip first col
return 0;
}