#include<iostream>
using namespace std;

void selection(int arr[], int size)
{
    if(size==0 || size == 1)
        return ;
    int swap_index=0;
    for (int i = 1; i < size; i++)
    {
        if(arr[0]>arr[i])
            swap_index=i;
    }
    swap(arr[0],arr[swap_index]);

    selection(arr+1,size-1);
}

int main()
{ 
    int arr[]= {3,6,7,2,9,4,1,0,5,9};
    selection(arr,10);

    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    
return 0;
}