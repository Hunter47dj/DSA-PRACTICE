//{ Driver Code Starts
// Driver Code
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    // Complete this function
    long long int count(long long int n)
    {
    	// Your code here
    std::vector<int> dp(n + 1, 0);

    // There is one way to reach score 0, which is by not making any move
    dp[0] = 1;

    // Fill the dp vector for scores 1 to n
    for (int i = 3; i <= n; ++i) {
        dp[i] += dp[i - 3];
    }
    for (int i = 5; i <= n; ++i) {
        dp[i] += dp[i - 5];
    }
    for (int i = 10; i <= n; ++i) {
        dp[i] += dp[i - 10];
    }

    // The final result is stored in dp[n]
    return dp[n];
    	
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		Solution obj;
		cout<<obj.count(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends