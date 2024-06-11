//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &a, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &a[i]);
        }
    }

    template <class T>
    static void print(vector<T> &a) {
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    
          struct Pair {
        int a;
        int b;
        int diff;
        Pair(int a, int b, int diff) : a(a), b(b), diff(diff) {}
    };

    struct Compare {
        bool operator()(const Pair& p1, const Pair& p2) {
            return p1.diff < p2.diff;
        }
    };

    static long long maxTip(int n, int x, int y, vector<int>& arr, vector<int>& brr) {
        priority_queue<Pair, vector<Pair>, Compare> pq;
        
        for (int i = 0; i < n; ++i) {
            pq.emplace(arr[i], brr[i], abs(arr[i] - brr[i]));
        }

        long long sum = 0;
        int countA = 0;
        int countB = 0;
        while (!pq.empty()) {
            Pair p = pq.top();
            pq.pop();
            int a = p.a;
            int b = p.b;
            
            if ((a >= b && countA < x) || countB >= y) {
                sum += a;
                countA++;
            } else {
                sum += b;
                countB++;
            }
        }
        return sum;
    }
    
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        int x;
        scanf("%d", &x);

        int y;
        scanf("%d", &y);

        vector<int> arr(n);
        Array::input(arr, n);

        vector<int> brr(n);
        Array::input(brr, n);

        Solution obj;
        long long res = obj.maxTip(n, x, y, arr, brr);

        cout << res << endl;
    }
}

// } Driver Code Ends