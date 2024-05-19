//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        // Complete the function
         int start = 0;
        int end = n-1;
        int ans = 0;
        int diff = 1e9;
        int prev = INT_MIN;
        while(start<=end){
             int mid = (start+end)/2;
             int cal = abs(k - arr[mid]);
             if(diff>=cal){
                if(arr[ans]>=prev){
                  diff = cal;
                  ans = mid;
                  prev = arr[mid];
                }
             }
             if(arr[mid] == k){
                  break;
             }else if(mid+1<n && arr[mid]>=k && arr[mid+1] >=k){
                  end = mid-1;
             }else if(mid + 1<n && arr[mid]<=k && arr[mid+1]<=k){
                  start = mid+1;
             }else if(mid+1<n && arr[mid]<=k && arr[mid+1]>=k){
                  int cal1 = abs(k-arr[mid]);
                  int cal2 = abs(k-arr[mid+1]);
                  if(cal2<=diff){
                       ans = mid+1;
                       diff = cal2;
                  }
                  if(cal1<diff){
                       ans =mid;
                       diff = cal1;
                  }
                  break;
                  
             }else{
                 end = mid-1;
             }
        }
        return arr[ans];
    } 
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(n,k,arr)<<endl;
    }
}

// } Driver Code Ends