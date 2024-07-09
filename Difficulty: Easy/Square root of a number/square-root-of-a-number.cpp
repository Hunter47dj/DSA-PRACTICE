//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:

    
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here  
        long long start = 1, end = x;
        while(start <= end)
        {
            
            long long mid = start + (end - start) / 2;
            
            if(mid * mid == x)
                return mid;
               
            else if(mid * mid > x)
                end = mid - 1;
    
            else
                start = mid + 1;
            
         }
        
        return start-1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends