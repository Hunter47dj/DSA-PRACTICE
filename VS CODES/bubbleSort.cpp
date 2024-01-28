#include<iostream>
using namespace std;

int main()
{ 
    int arr[]= {7, 5, 1, 4, 8, 3, 9, 2, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
   

    for(int i=1; i<n; i++)
    {
        for(int j = 0; j < n-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
                
        }
    }
    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i];
    }
    
    
    
return 0;
}