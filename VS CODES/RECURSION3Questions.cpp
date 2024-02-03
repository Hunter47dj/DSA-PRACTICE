// binary search questions using recursion


#include<iostream>
using namespace std;

// find first and last occurance of an element in a sorted array.

int firstoccur(int arr[], int size, int num)
{
    int s=0;
    int e=size-1;
    int first_index=0;
    while (s<=e)
    {
        int mid=s+(e-s)/2;

        if(arr[mid]==num)
           {
             first_index=mid;
             e= mid-1;
           }
        else if (arr[mid]<num)
        {
            s=mid+1;
        }
        else e=mid-1;
        
    }
    return first_index;
    
}


int lastoccur(int arr[], int size, int num)
{
    int s=0;
    int e=size-1;
    int last_index=0;
    while (s<=e)
    {
        int mid=s+(e-s)/2;

        if(arr[mid]==num)
           {
             last_index=mid;
             s= mid+1;
           }
        else if (arr[mid]<num)
        {
            s=mid+1;
        }
        else e=mid-1;
        
    }
    return last_index;
    
}

int RFO(int arr[], int s, int e, int num)
{
    if(s>e)
        return -1;

    int mid= s+(e-s)/2;
    if(arr[mid]==num)
    {
        e=mid-1;
        return mid;
    }

    if(arr[mid]<num)
        return RFO(arr,mid+1,e,num);
    else 
        return RFO(arr,s,mid-1,num);

}

int main()
{ 

    int arr[]= {1,2,3,4,4,4,5,6,7};

    int size= 10;

    int num =4;

    cout<<"first occur :"<<firstoccur(arr,size,num)<<endl;
    cout<<"last occur :"<<lastoccur(arr,size,num)<<endl;
    cout<<"RFO first occur :"<<RFO(arr,0,9,num)<<endl;

return 0;
}