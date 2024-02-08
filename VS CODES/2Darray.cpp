#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

// search in 2D array

bool checkarray(int arr[][4],int num,int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j]==num)
            return true;
        }
        
    }
    return false;
}

// row wise  sum 

void ROWwiseSum(int arr[][4], int row , int col)
{
   
    for (int i = 0; i < row; i++)
    {   
         int sum=0;
        for (int j = 0; j < col; j++)
        {
            sum+=arr[i][j];
        }
        printf("\n row %d sum is %d \n",i+1,sum);
    }
    
}

// largest rowise sum and respective row index

void LargestRowSum(int arr[][4], int row , int col)
{
   int Lsum=INT_MIN,Lrow;
    for (int i = 0; i < row; i++)
    {   
         int sum=0;
        for (int j = 0; j < col; j++)
        {
            sum+=arr[i][j];
        }
        if(Lsum<sum)
        {
            Lsum=sum;
            Lrow=i;
        }
    }
    printf(" \n row %d has largest sum i.e. = %d \n",Lrow+1,Lsum);
}

// printing the array as wave 

void printWave(int arr[][4], int row , int col)
{
    for (int i = 0; i < col; i++)
    {
        if(i%2==0)
        {
            for (int j = 0; j < row; j++)
            {
               cout<<arr[j][i]<<" ";
            }
            
        }
        else
        {
            for (int j=row-1; j>=0; j--)
            {
               cout<<arr[j][i]<<" ";
            }
        }
    }

}
    // this works on the website coding ninja website 


vector<int> wavepattern(int arr[][4], int row, int col)
{
    vector<int> temp;
    for (int i = 0; i < col; i++)
    {
        if(i&1)
        {
            for (int j = row-1; j >=0; j--)
            {
                temp.push_back(arr[i][j]);
            }
            
            
        }
        else
        {
            for (int j = 0; j < row; j++)
            {
                temp.push_back(arr[i][j]);
            }
        }
        
        
    }
    
}

int main()
{ 
    // creating 2D array
    int row=3,col=4;
    // cin>>row>>col;
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

    //taking input ..

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cin>>arr[i][j];
    //     }
        
    // }

    //output

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // int target; cout <<"target: "; cin>>target;

//    cout<<"traget status :"<< checkarray(arr,target,row,col);


//    ROWwiseSum(arr,row,col);
//    LargestRowSum(arr,row,col);
cout<<endl;
      printWave(arr,row,col);

return 0;
}