//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	    // code here 
	    int memo[26];
	    
	    for(int i=0; i< s.length(); i++)
	    {
	        int   alphabet_location = s[i]-'a';
	        memo[alphabet_location]++;
	    }

        sort(memo, memo+26);
        int k=0;
        while (memo[k] == 0)
        {
           k++; 
        }
        
        if( memo[26] -memo[k] ==1 )
        {
            return true;
        }
        else return false;
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends