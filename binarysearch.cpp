#include<iostream>
using namespace std;

int binarySearch(int arr[], int key, int size)
{
    int mid,s =0;
  
    int e = size-1;

    while (s<= e)
    {
        mid = (s+e)/2;

        

        if (arr[mid]<key)
        { 
            s= mid+1;
        }
        else if (arr[mid]> key)
        {  
            e= mid-1;
        }
        
        if (arr[mid]==key)
        {
            return mid;
        }
        
    }
    return -1;
    
}

int main()
{ 
    int arr[10]= { 1,2,4,5,7,8,9,12,16,18};

    int key=14;
    int size= sizeof(arr)/sizeof(arr[0]);
    

    int index = binarySearch(arr,key,size);

    cout<<"index : "<<index;

return 0;
}