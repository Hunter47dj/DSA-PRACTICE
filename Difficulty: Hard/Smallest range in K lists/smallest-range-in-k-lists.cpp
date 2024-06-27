//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define N 1000


// } Driver Code Ends
// you are required to complete this function 
// function should print the required range
class Solution{
    public:
    pair<int,int> findSmallestRange(int KSortedArray[][N], int n, int k)
    {
          //code here
          pair<int,int>pr = {-1e5,1e5};
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        int maxiEle = -1e9;
        
        for(int i=0;i<k;i++){
            maxiEle = max(maxiEle,KSortedArray[i][0]);
            pq.push({KSortedArray[i][0],{i,0}});
        }
        
        // cout<<maxiEle<<"\n";
        
        int totalIterations = k*(n-1)+1;
        // cout<<totalIterations<<"\n";
        
        while(totalIterations--){
            auto tp = pq.top();
            pq.pop();
            
            // cout<<tp.first<<"\n";
            
            int gap = maxiEle - tp.first;
            if(gap<(pr.second-pr.first)){
                pr = {tp.first,maxiEle};
                // cout<<pr.first<<" "<<pr.second<<"\n";
            }
            
            // we will break the  loop when one of the list exhausted
            if(tp.second.second+1==n)break;
            
            int newEle = KSortedArray[tp.second.first][tp.second.second+1];
            maxiEle = max(maxiEle,newEle);
            pq.push({newEle,{tp.second.first,tp.second.second+1}});
        }
        return pr;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int arr[N][N];
        pair<int,int> rangee;
        for(int i=0; i<k; i++)
            for(int j=0; j<n; j++)
                cin>>arr[i][j];
        Solution obj;
	    rangee = obj.findSmallestRange(arr, n, k);
	    cout<<rangee.first<<" "<<rangee.second<<"\n";
    }   
	return 0;
}


// } Driver Code Ends