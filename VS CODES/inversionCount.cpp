#include<iostream>
using namespace std;

int count=0;

void merge(int *arr, int s, int e)
{
     int mid = s+(e-s)/2;

     int len1 = mid-s+1;  // because these are lengths of array so +1
     int len2 = e-mid-1+1;

     int *first = new int[len1];   // for storing first and second half of the array
     int *second = new int[len2];

     // copying the array in first and second
     int k=s;
     for (int i = 0; i < len1; i++)
     {
        first[i]= arr[k++];
     }
     // copying 2nd
     k=mid+1;
     for (int i = 0; i < len2; i++)
     {
        second[i]= arr[k++];
     }
     

    //merge two sorted arrays
    int index1=0;
    int index2=0;
    int mainArrayIndex=s;

    while (index1 <len1 && index2 <len2)
    {
        if(first[index1]< second[index2])
            arr[mainArrayIndex++] = first[index1++];
        else
        {
            count++;
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    //if elments are left in first or second

    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
        count++;
    }
    
    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
        count++;
    }

    delete []first;
    delete []second;

}

void mergesort(int *arr, int s, int e)
{
    // base case 
    if (s>=e)
        return ;

    int mid = s+(e-s)/2;
    
    mergesort(arr,s,mid); // sorting first half array

    mergesort(arr,mid+1,e);  // sorting fsecond half array

    merge(arr,s,e);
    
}

int main()
{ 
    int arr[] ={1,20,6,4,5};
    int n =5;

    mergesort(arr,0,n-1);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<count;
    
return 0;
}