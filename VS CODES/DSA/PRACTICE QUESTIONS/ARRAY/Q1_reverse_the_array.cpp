// revserse the given array {1,2,3,4,5}

#include<iostream>

#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[], int size ) {
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// void reverse(int* arr, int s, int end){
//     if (s>=end)
//     {
//         return;
//     }
    
//     swap(arr[s],arr[end]);

//     reverse(arr,s+1,end-1);
    
// }


int main() {
    int arr[] = {1,2,3,4,5};

    int n = sizeof(arr)/sizeof(arr[0]);

// using other array*****************************************************
    // int temp[n]  = {0};
    // int k =0;
    // for (int i = n-1; i >=0 ; i--)
    // {
    //     temp[k++] = arr[i];
    // }
    // printarray(temp,n);

// using two pointers *****************************************************
    // int s=0, end = n-1; 

    // while (s <= end)
    // {
    //     swap(arr[s++],arr[end--]);
    // }

    // printarray(arr,n);

// using recurssive function *****************************************************
    // int s=0, end = n-1; 
    // reverse(arr,s,end);
    // printarray(arr,n);

// using stack and push pop ********************************************************

    // stack<int> temp;

    // // pushing elements into the stack
    // for (int i = 0; i < n; i++)
    // {
    //     temp.push(arr[i]);
    // }

    // // copying and pop the elements from the stack
    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] = temp.top();
    //     temp.pop();
    // }

    // printarray(arr,n);

// using the inbuilt function *************************************************

    reverse(arr,arr+n);  
    printarray(arr,n);
    
}