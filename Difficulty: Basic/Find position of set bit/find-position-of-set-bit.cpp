//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        // code here
        string s;
        int n=N;
        if(N==1) return 1;
        
        int count=0;
        while(n){
            n &= n-1;
            count++;
        }
        
        if(count != 1) return -1;
        
        n = N;
        while(n){
            if(n%2==0) s+='0';
            else s+='1';
            n = n/2;
        }
        
       return  1+s.find('1');
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
// } Driver Code Ends