// in an sorted rotated array find the pivot
//  { 5 6 7 1 2 3} this is sorted rotated array .
// pivot is 1 depending on question details . can be 7 also// we are taking 1 as pivot
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int pivot(vector<int> &arr)
{
    int s = 0;
    int e = arr.size() - 1;

    int mid = (s + e) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])    
            s = mid + 1;
        else
            e = mid;
        mid = (s + e) / 2;
    }

    return s;
}

int main()
{
    vector<int> arr = {4, 5, 6, 7, 1, 2, 3};

    cout << "pivot index :" << pivot(arr);

    return 0;
}