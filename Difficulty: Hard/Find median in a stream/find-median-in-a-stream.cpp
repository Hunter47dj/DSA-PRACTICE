//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    //Function to insert heap.
     priority_queue<int> maxpq; 
    priority_queue<int, vector<int>, greater<int>> minpq;
    //Function to insert heap.
    void insertHeap(int &x)
    {
        if(maxpq.empty() && minpq.empty())
        maxpq.push(x);
        
        else if(minpq.size()-maxpq.size()==1)
        {
            if(x>minpq.top()){
            int ele = minpq.top();
            minpq.pop();
             maxpq.push(ele);
            minpq.push(x);}
            else
        maxpq.push(x);
        }
        
        else if(maxpq.size()-minpq.size()==1){
        if(x<maxpq.top()){
            int ele = maxpq.top();
            maxpq.pop();
             minpq.push(ele);
            maxpq.push(x);}
            else
            minpq.push(x);
        }
        else if(maxpq.size()==minpq.size())
        {
            
           if (x < maxpq.top())
            maxpq.push(x);
        else
            minpq.push(x);
            
            
        }
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        
    }
    
    //Function to return Median.
    double getMedian()
    {
        if(maxpq.size()==minpq.size())
        return (maxpq.top()+minpq.top())/2.0;
        
        else if(maxpq.size()-minpq.size()==1)
        return maxpq.top();
        else
        return minpq.top();
    }
};


//{ Driver Code Starts.

int main()
{
    int n, x;
    int t;
    cin>>t;
    while(t--)
    {
    	Solution ob;
    	cin >> n;
    	for(int i = 1;i<= n; ++i)
    	{
    		cin >> x;
    		ob.insertHeap(x);
    	    cout << floor(ob.getMedian()) << endl;
    	}
    }
	return 0;
}
// } Driver Code Ends