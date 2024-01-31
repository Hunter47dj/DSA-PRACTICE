//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        // code here
        sort(arr,arr+n);
        vector<int > rep ;
        for(int i=0; i<n-1; i++)
        {
            if(arr[i]==arr[i+1])
            {   
                if(!binary_search(rep.begin(),rep.end(),arr[i]))
                {
                    rep.push_back(arr[i]);
                }
                
            }
        }
        
        if(rep.empty())
        {
            return {-1};
        }
        return rep;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends