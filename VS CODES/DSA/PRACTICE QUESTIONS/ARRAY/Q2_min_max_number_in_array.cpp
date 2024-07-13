#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main()
{ 
    int arr[] = {1,9,3,7,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

// just aort the array and print the first and last element ***************************************
    // sort(arr,arr+n);
    // cout<<"min : "<<arr[0]<<endl;
    // cout<<"max : "<<arr[n-1]<<endl;

// using INT_MAX and INT_MIN *******************************************************************
   
    int min = INT_MAX;
    int max = INT_MIN;

    if(n==1)
    {
        cout<<"min : "<<arr[0]<<endl;
        cout<<"max : "<<arr[0]<<endl; 
    }
    
    else {
        for (int i = 0; i < n; i++)
        {
           if (arr[i] < min)
           {
            min = arr[i];
           }
           if (arr[i] > max)
           {
            max = arr[i];
           }
                      
        }

        cout<<" min : "<<min<<endl;
        cout<<" max : "<<max<<endl;
        
    }

    

}