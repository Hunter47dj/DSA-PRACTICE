
// 2d dynamic array is created with the help of double pointer .

#include<iostream>
using namespace std;

int main()
{ 
    // int n=0;
    // cin>>n;     // size of 2d array assuming rows=columns  

    // int ** arr= new int*[n];   // creating rows

    // for (int i = 0; i < n; i++)
    // {
    //     arr[i]= new int[n];    // creating columns
    // }

    // taking rows and columns different

    int row; cout<<"row: "; cin>>row;
    int col; cout<<"col: "; cin>>col;

    // creating 2d array 

    int **arr= new int*[row];  // pointer waala row array 

    for (int i = 0; i < row; i++)
    {
        arr[i]= new int[col];  // hrr pointer ka apna dedicated array 
    }
    

    // input
    cout<<"enter the array ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    //output
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }

    // releasing the heap memeory of 2D array.

    for (int i = 0; i < row; i++)
    {
        delete [] arr[i];    // deleting columns 
    }

    delete [] arr; // deleting pointer waala array
    
    

return 0;
}