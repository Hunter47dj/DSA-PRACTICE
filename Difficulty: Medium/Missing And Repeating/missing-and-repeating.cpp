//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
         int sum=0;
        for(auto &x:arr) sum+=x;
        
       int num1=-1;
       for(int i=0;i<n;i++){
           int val=arr[i];
           if(arr[val-1]!=val){
               swap(arr[val-1],arr[i]);
              i--;
           }
           else if(arr[val-1]==val){
               if(i==val-1) continue;
               else {
                   num1=val;
                   break;
               }
           }
           
       }
       int sum1=1ll*n*(n+1)/2;
       int diff=sum1-sum;
       int num2=diff+num1;
       return {num1,num2};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends