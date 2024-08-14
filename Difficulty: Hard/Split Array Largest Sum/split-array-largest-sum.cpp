//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  private:
    int answer(int arr[], int mid, int N){
        int count = 1;
        int finalans = 0;

        for(int i = 0; i < N; i++){
            if(finalans + arr[i] <= mid){
                finalans += arr[i];
            }
            else{
                count = count+1;
                finalans = arr[i];
            }
        }
        return count;
    }
    
public:
    int splitArray(int arr[] ,int N, int K) {
       
        int maximumelement = *max_element(arr, arr+N);
            if(N < K)
            return -1;
            
            if(N == 1){
                return arr[0];
            }
        int sum = 0;

        for(int i = 0; i < N; i++){
            sum = sum + arr[i];
        }
        int start = maximumelement;
        // int end = accumulate(nums.begin(), nums.end(), 0);
        int end = sum;
        int mid = start + (end-start)/2;

        while(start <= end){

            mid = start + (end-start)/2;
            int ans = answer(arr, mid, N);
            
            if(ans > K)
                start = mid+1;
            else
                end = mid-1;
        }
        return start;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends