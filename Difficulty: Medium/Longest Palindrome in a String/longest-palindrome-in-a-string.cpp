//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
        // code here
         int maxLen=INT_MIN;
        int l=0,r=0;
        int sind=0;
        //odd
        for(int i=0;i<S.size();i++){
            l=i;
            r=i;
            while(S[l]==S[r]){
                if(r-l>maxLen){
                    maxLen=r-l;
                    sind=l;
                }
                if(l>=1 and r<S.size()-1){
                    l--;
                    r++;
                }
                else{
                    break;
                }
            }
        }
        //even
        for(int i=1;i<S.size();i++){
            l=i-1;
            r=i;
            while(S[l]==S[r]){
                if(r-l>maxLen){
                    maxLen=r-l;
                    sind=l;
                }
                if(l>=1 and r<S.size()-1){
                    l--;
                    r++;
                }
                else{
                    break;
                }
            }
        }
        return S.substr(sind,maxLen+1);
    
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends