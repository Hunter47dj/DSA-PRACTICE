//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string s){
        //code here
        int len = s.length();
        
        if(len <3)
        {
            int num = stoi(s);
            if(num%8==0) return 1;
            else return -1;
            
        }
        string str = s.substr(len-3,len-1);
        int num = stoi(str);
        if(num%8==0) return 1;
        else return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends