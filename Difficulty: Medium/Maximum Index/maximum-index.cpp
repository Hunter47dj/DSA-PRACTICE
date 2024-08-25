//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int binarySearch(vector<pair<int, int>>& decArray, int num) {

int start = 0;

int end = decArray.size()-1;

int ans = end;

while(start <= end) {

int mid = start + (end - start)/2;

if(decArray[mid].first > num) {

start = mid + 1;

}

else {

ans = decArray[mid].second;

end = mid - 1;

}

}

return ans;

}




int maxIndexDiff(int arr[], int n) {

vector<pair<int, int>> decArray;

int maxDiff = 0;

decArray.push_back({arr[0], 0});

for(int indexOfArr = 1; indexOfArr < n; indexOfArr++) {

if(decArray.back().first <= arr[indexOfArr]) {

int firstDecIndex = binarySearch(decArray, arr[indexOfArr]);

maxDiff = max(maxDiff, indexOfArr - firstDecIndex);

}

else {

decArray.push_back({arr[indexOfArr], indexOfArr});

}

 

}

return maxDiff;

}

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends