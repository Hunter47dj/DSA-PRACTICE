#include <iostream>
using namespace std;



// checking is sorted ? using recurssion

bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
        return true; // if only one or no element present , hence sorted

    if (arr[0] > arr[1]) // if first 2 elements are sorted then going to next elements
        return false;
    else
        return isSorted(arr + 1, size - 1); // using arr+1 to skip the first element already checked
                                            // size is also reducing
}






// printing sum of the elements of the array 
int sum=0;
int arrSum(int arr[], int size)
{
    if(size==0)
        return 0;
    // if(size==1)
    //     return arr[0];
    return arrSum(arr+1,size-1) + arr[0];
}






// LINEAR SEARCH USING RECURSSION 

bool isfound(int arr[], int size, int num)
{
    if(size==0)
        return false;
    if(arr[0]==num)
        return true;
    return isfound(arr+1, size-1,num);
}




//BINARY SEARCH USING RECURSSION  

bool BSfound(int arr[], int start, int end, int num)
{
    if(start > end)
        return false;
    
    int mid = start + (end-start)/2;
    if (arr[mid]==num)
    {
        return true;
    }
    
    if(arr[mid]<num)
        return BSfound(arr,mid+1,end,num);
    else return BSfound(arr,start,mid-1,num);
}


int main()
{
    int arr[] = {1,3,4,6,7,9};


    // checking if sorted
    int size = 6;
    
    if (isSorted(arr, size))
        cout << "   sorted ";
    else
        cout << "  not sorted";

    // finding the sum 
    cout<<"\n sum of array "<<arrSum(arr,size);

    // linear searching the number in the array
    cout<<"\n linear search : check if 6 is present "<<isfound(arr,size,9)<<endl;

    // binary searching the number in the array
    cout<<"\n binary search: check if 7 is present "<<BSfound(arr,0,6,7)<<endl;

    return 0;
}