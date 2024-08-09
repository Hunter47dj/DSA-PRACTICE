//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    int getSum(int i,vector<int>&fenwick)
{
        int sum = 0;
        for(;i>0;i-=(i&(-i)))
            sum += fenwick[i];
        return sum;
}
void update(vector<int>&fenwick,int i,int x)
{
        for(;i<fenwick.size();i+=(i&(-i)))
            fenwick[i] += x;
 }
long long int inversionCount(long long arr[], int n) 
{
        long long int count = 0;
    
 
        vector<int> fenwick(n + 1, 0);
    
        vector<long long> sorted_arr(arr, arr + n);
        sort(sorted_arr.begin(), sorted_arr.end());
        unordered_map<long long, int> rank_map;
    
  
        int rank = 1;
        for (long long value : sorted_arr) {
            if (rank_map.find(value) == rank_map.end()) {
                rank_map[value] = rank++;
            }
        }
    
        for (int i = 0; i < n; ++i) {
            arr[i] = rank_map[arr[i]];
        }
    
        // Count inversions
        for (int i = n - 1; i >= 0; --i) {
            count += getSum(arr[i] - 1, fenwick);  
            update(fenwick, arr[i], 1);            
        }
    
        return count;
 }
};

//{ Driver Code Starts.

int main() {

    long long T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        long long A[N];
        for (long long i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A, N) << endl;
    }

    return 0;
}

// } Driver Code Ends