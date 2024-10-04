//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

int Search(vector<int> ,int );

//User code will be pasted here

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        vector<int> vec(n);
        
        for(int i =0;i<n;i++) 
            cin >> vec[i];
        
        int target;
        cin >> target;
        
        cout << Search(vec,target) << "\n";
         
    }
}
// } Driver Code Ends


//User function template for C++

// vec : given vector of elements
// K : given value whose index we need to find 


int binarysearch(vector<int> &arr, int k, int st, int ed) {
        // code here
        int s=st;
        int end = ed;
        int mid = (s+end)/2;
        while(s <=end) {
            
            if(arr[mid] == k) return mid;
            else if(arr[mid] <k) s = mid+1;
            else end = mid-1;
            
            mid = (s+end)/2;
        }
        
        return -1;
    }
    
int pivot(vector<int> arr)
{
    int s=0;
        int end = arr.size()-1;
        int mid = (s+end)/2;
        while(s <end) {
            
            if(arr[mid] >= arr[0]) s = mid+1;
            else end = mid;
            
            mid = (s+end)/2;
        }
        
        // hence we got the pivot in mid 
        return s;
        
}

int Search(vector<int> arr, int k) {
    
        
        int pvt = pivot(arr);
        
        
        if(arr[pvt] == k) return pvt;
        else if(arr[0] > k ) return binarysearch(arr,k,pvt,arr.size()-1);
        else if(arr[0] < k ) return binarysearch(arr,k,0,pvt);
        
        
    //code here
}