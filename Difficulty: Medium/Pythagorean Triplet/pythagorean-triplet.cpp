//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++

	template <typename T> T myabs(T x)
{
     return (x >= 0) ? x : -1*x;
}

class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not

 
bool checkTriplet(int arr[], int n) {
    // code here
        int maxvalue = 0;
        int found = 0;
        for (int i=0; i < n; i++) {
            if (maxvalue < arr[i]) {
                maxvalue = arr[i];
            }
        }
        // interger include negative number, 0, postive number
        int arraymap[maxvalue + 1] = {0};
        // just in case do this or use vector
        for (int i= 0; i < maxvalue + 1; i++) {
            arraymap[i] = 0;
        }
 
        for (int i = 0; i < n; i++) {
            arraymap[myabs(arr[i])] = 1;
        }
        for (int i = 1; i < maxvalue + 1; i++) {
            for (int j= 1; j < maxvalue + 1; j++) {
                if (arraymap[i]==1 && arraymap[j] == 1) {
                    double aa = i*i;
                    double bb = j*j;
                    double cc = aa + bb;
                    double dc = sqrt(cc);
 
                    /* should be integer*/
                    if (dc-(int)(dc) != 0) continue;
 
                    int c = int(dc);
                    if (c <= maxvalue && arraymap[c]) {
                        found = 1;
                        break;
                    }
                }
            }
            if (found) break;
        }
        return found;
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.checkTriplet(arr, n);
        if (ans) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}

// } Driver Code Ends