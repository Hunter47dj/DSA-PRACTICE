#include <iostream>
using namespace std;

int partition(int *arr, int s, int e)
{
    int pivot = s; // assuming first element to be placed at correct location
    int count = 0;
    for (int i = s + 1; i < e + 1; i++)
    {
        if (arr[i] < arr[pivot])
            count++;
    }

    pivot = s + count;  // updated pivot
    swap(arr[s], arr[pivot]); // placing at correct location

    int i = s, j = e;

    while (i < pivot &&  j > pivot)    // setting the left and the right elements 
    {
        while (arr[i] < arr[pivot])       // if
        {
            i++;
        }

        while (arr[j] > arr[pivot])      // if
        {
            j--;
        }

        if ( i < pivot &&  j > pivot )   // arr[i] > arr[pivot] && arr[j] < arr[pivot]
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivot;
}

void quickSort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
        return;

    int p = partition(arr, s, e);

    // recursive calls 

    quickSort(arr,s,p-1);   // left sort
    quickSort(arr,p+1,e);   // right sort
}

int main()
{
    int arr[] = {3, 1, 4, 5, 2, 0};

    int n = 6;
    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}