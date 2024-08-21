//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
        int maxi=0;
        for(int i=0;i<N;i++){
            maxi=max(maxi,arr[i]);
            
        }

        vector<int> v(maxi+1,0);
        
        for(int i=0;i<N;i++){
            v[arr[i]]=1;
        }
        
        
        int ans=0;
        int c=0;
        for(int i=0;i<=maxi;i++){
            if(v[i])
                c++;
            else
                c=0;
                
            ans=max(c,ans);
        }
        return(ans);
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends