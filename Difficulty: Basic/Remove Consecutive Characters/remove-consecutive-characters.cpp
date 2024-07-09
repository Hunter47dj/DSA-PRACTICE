//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
         string ans = "";
    
        // Iterate through the string
        for (int i = 0; i < S.length(); i++) 
        {
            // If the current character is not the same as the next character, add it to the result
            if (i == S.length() - 1 || S[i] != S[i + 1]) 
            {
                ans += S[i];
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 




// } Driver Code Ends