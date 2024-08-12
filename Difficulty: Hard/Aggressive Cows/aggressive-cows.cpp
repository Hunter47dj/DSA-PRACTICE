//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:

    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(), stalls.end());
        int low = 1; 
        int high = stalls[n - 1] - stalls[0];
        int ans = -1;
        while(low <= high){
            int mid = low + (high - low)/2;
            int curr = stalls[0];
            int count = 1;
            for(int i = 1; i < n; i++){
                if(curr + mid <= stalls[i]){
                    curr = stalls[i];
                    count++;
                }
            }
            if(count < k){
                high = mid - 1;
            }else{
                ans = max(mid, ans);
                low = mid + 1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends