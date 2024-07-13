//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    bool classArrangement(int n, vector<int> &arr) {
        // code here
        int cnt=0;
        // bool flag = false;
        for(int i =0; i<n ; i++)
        {
            if(arr[i] < arr[i+1])
            {
                // flag =true;
                continue;
            }
            else {
                cnt++;
               
            }
             cout<<" "<<i<<" "<<cnt;
        }
        if(cnt == 1)
        {
            return true;
        }
        else return false;
        
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        vector<int> arr(n);
        Array::input(arr, n);

        Solution obj;
        bool res = obj.classArrangement(n, arr);

        cout << res << endl;
    }
}

// } Driver Code Ends