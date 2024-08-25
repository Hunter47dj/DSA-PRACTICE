//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to find minimum number of pages.
     bool possiblesolution(int arr[],int n,int m,int maxpage){
        int pagesum=0;
        int c=1;    //check for the count of students 
        for(int i=0;i<n;i++){
            if(arr[i]>maxpage){
                return false;   //current book ke page hi max page se jada he 
            }
            else if(arr[i]+pagesum>maxpage){
                c++;    //ek student ko itti hi book allocate ho skti he , student change kro
                pagesum=arr[i]; //new student ko arr[i] se allot kro
                if(c>m){
                    return false;
                }
            }
            else{
                pagesum+=arr[i];
            }
            
        }
        return true;
    }
  
    // Function to find minimum number of pages.
    long long findPages(int n, int arr[], int m) {
        if(m>n) return -1;  //if student>books
        
        //find sum of arr element
        //int sum=0;
        //for(int x=0;x<arr.size();x++){
        //    sum+=arr[i];
        //}
        
        //soln should lie in between the range 0 to the maximum no. of pages allocation that is sum 
        int s=0;
        int e=accumulate(arr,arr+n,0);  //accumulate in stl used to find the sum of array elements
        int ans=-1; //to store ans
        while(s<=e){
            int mid=s+(e-s)/2;
            //try to allocate mid pages atmost
            if(possiblesolution(arr,n,m,mid)){
                //minimize the page allocation 
                //move left 
                ans=mid;
                e=mid-1;
            }
            else {
                //if not a possible solution
                s=mid+1;
            }
            
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        int m;
        cin >> m;
        Solution ob;
        cout << ob.findPages(n, A, m) << endl;
    }
    return 0;
}

// } Driver Code Ends