//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
       unordered_map<int, int> memo;
        int maxSum(int n)
        {   
            // base case
                if (n == 0) {
                    return 0;
                }
            
                if (memo.find(n) != memo.end()) {
                    return memo[n];
                }

            
            int part1 = n/2;
            int part2 = n/3;
            int part3 = n/4;
            
            int part1_sum = maxSum(part1);
            int part2_sum = maxSum(part2);
            int part3_sum = maxSum(part3);
            
            int current_sum = max(n,part1_sum + part2_sum + part3_sum);
            
             memo[n] = current_sum;
            
            return current_sum;
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
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends