//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
int mode=1000000007;

    int nCr(int n, int r){
        // code here
        if (r > n)
            return 0;
        vector<int> prev(r+1),curr(r+1);
        prev[0] = curr[0] = 1;
        if(r == n || r == 0){
            return 1;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= r; j++)
            {
                curr[j] = (prev[j - 1] + prev[j])%mode;
            }
            prev = curr;
        }
        return prev[r];
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends