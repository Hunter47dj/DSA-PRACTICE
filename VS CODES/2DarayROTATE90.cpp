// rotate the 2d matrix by 90 degree clockwise
/*
1 2 3
4 5 6
7 8 9

||

7 4 1
8 5 2
9 6 3

*/
#include<iostream>
#include<vector>
using namespace std;

void swapp(vector<int> &a, vector<int> &b)
{
    vector<int> temp;
    temp=a;
    a=b;
    b=temp;

}

void rotate(vector<vector<int>>& matrix) {

    // take transpose of matrix by swapping arr[i][j] by arr[j][i]
    int row= matrix.size();
    int col= matrix[0].size();

    for(int i=0 ; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            swap(matrix[i][j],matrix[j][i]);
            
        }
    }

    // after this interchange first and third column 

    for(int i=0; i<row; i++)
    {
        swap(matrix[i][0],matrix[i][col-1]);
    }
    
}


int main()
{ 
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    int size= matrix.size();
    for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
            
        }

    rotate(matrix);

cout<<"after \n";

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
        
    }

    int a=10,b=20;

    // cout<<" before swaping "<<a<<" "<<b<<endl;
    
    // swapp(a,b);
    // cout<<" after swaping "<<a<<" "<<b<<endl;

return 0;
}
