//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int countRev (string str)
{
    // your code here
    if(str.length()%2 !=0)
        return -1;
        
    stack<char> s;
    
    for(int i=0; i< str.length(); i++)
    {
        char ch = str[i];
        if(ch == '{')
        {
            s.push(ch);
        }
        else {
            if(!s.empty() && s.top() == '{')
            {
                s.pop();
            }
            else {
                s.push(ch);
            }
        }
    }
    
    int a =0;
    int b =0;
    
    while(!s.empty())
    {
        char top = s.top();
        if(top == '{')
            a++;
        else b++;
        
        s.pop();
    }
    
    int ans = (a+1)/2 + (b+1)/2;
    
    return ans;
}