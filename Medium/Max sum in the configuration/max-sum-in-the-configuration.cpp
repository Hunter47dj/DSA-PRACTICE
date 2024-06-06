//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/
class Solution {
  public:
    long long max_sum(int a[], int n) {
        // Your code here
         long current_value = 0;
        long array_sum = 0;
        
        for (int i = 0; i < n; i++) {
            array_sum += a[i];
            current_value += (long)i * a[i];
        }
        
        // Initialize the maximum sum as the current value
        long max_value = current_value;
        
        // Calculate the sum for each rotation
        for (int i = 1; i < n; i++) {
            // Using the relation to get the next sum value
            current_value = current_value + array_sum - (long)n * a[n - i];
            // Update the maximum value
            max_value = max(max_value, current_value);
        }
        
        return max_value;
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution ob;
        cout << ob.max_sum(A, N) << endl;
        /*keeping track of the total sum of the array*/
    }
}

// } Driver Code Ends