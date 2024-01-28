// Problem statement : First and Last Position of an Element In Sorted Array

// Expected Time Complexity:
// Try to do this in O(log(n)).


// Constraints:
// 1 <= n <= 10^5
// 0 <= k <= 10^9
// 0 <= arr[i] <= 10^9

// Time Limit : 1 second

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
//     // Write your code here
//     // sort(arr.begin(),arr.end());
//     int first=-1;
//     int last =-1;

//     int count=0;
//     for(int i=0; i<arr.size(); i++)
//     {
//         if(arr[i]==k)
//         {
//             first=i;
//             break;
//         }
//     }
//     for(int i=0; i<arr.size(); i++)
//     {
//         if(arr[i]==k)
//         {
//             last=i;
//         }
//     }

//     return {first,last};
// }


int firstPosition(vector<int>& arr, int n, int k)
{

     int s=0;
     int e = arr.size()-1;
     int mid,ans=-1;
     while(s<=e)
     {
       mid =s+ (e-s)/2;

       if(arr[mid]==k)
       {
           ans=mid;
           e=mid-1;
       }

       else if (arr[mid]<k)
        {
            s=mid+1;
        }
       else if (arr[mid]>k)
        {
            e=mid-1;
        }

     }
     return ans;
}
int lastPosition(vector<int>& arr, int n, int k)
{
  
     int s=0;
     int e = arr.size()-1;
     int mid,ans=-1;
     while(s<=e)
     {
       mid =s+ (e-s)/2;

       if(arr[mid]==k)
       {
           ans=mid;
           s=mid+1;
       }

       else if (arr[mid]<k)
        {
            s=mid+1;
        }
       else if (arr[mid]>k)
        {
            e=mid-1;
        }

     }
     return ans;
}



pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
     int a,b;
     a= firstPosition(arr, n, k);
     b= lastPosition(arr, n,  k);

     return {a,b};
}


int main()
{ 
return 0;
}






