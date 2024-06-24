//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
       stack<int> st;
       
       for(int i=0; i<n; i++)
       {
           st.push(i);
       }
       
       while(st.size() != 1)
       {
           int A = st.top();
           st.pop();
           
           int B = st.top();
           st.pop();
           
        //   if(M[A][B] ==1)
        //   {
        //       st.push(B);
        //   }
        //   else st.push(A);
           
           (M[A][B] == 1) ? st.push(B): st.push(A);
       }
       
       // now we have a potential candidate to become celebrity 
       
    //   verification of rows and columns of potential candidate.
    
    int celeb = st.top();
    
    //checking row of celeb
    
    for(int i=0; i<n; i++)
    {
        if(M[celeb][i] != 0)
        {
            return -1;
        }
    }
    
    //checking column of celeb
    
    for(int i=0; i<n; i++)
    {
        if(celeb == i)
        {
            continue;  // skipping diagonal element
        }
        if(M[i][celeb] != 1)
        {
            return -1;
        }
    }
    
    
    // now if we reach here then potential candidate is actually a celebrity
    
    return celeb;
       
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends