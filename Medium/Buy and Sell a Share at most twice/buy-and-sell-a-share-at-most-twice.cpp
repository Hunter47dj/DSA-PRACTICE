//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
        //User function Template for C++
        
        int maxProfit(vector<int>&price){
            //Write your code here..
            
                int First_buy = INT_MIN;
                int First_sell = 0;
            
                int Second_buy = INT_MIN;
                int Second_sell = 0;

               
                for (int i = 0; i < price.size(); i++)
                {
                    First_buy = max(First_buy,-price[i]);     // -10         // -10                 // -5           // -5       //-5        //-5
                    First_sell = max(First_sell,price[i]+First_buy);   // -10+10 =0      //22 -10 =12        // 12           //70        //70        //75
                    Second_buy = max(Second_buy,First_sell-price[i]);   // -10            //12-22 = -10       // 12 -5 = 7    //7         //7         //7
                    Second_sell = max(Second_sell,price[i]+Second_buy);   // 0              // 22 + -10 = 12    // 12           //82        //82        //87
                }
            
                return Second_sell;   
        }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        Solution obj;
        cout<<obj.maxProfit(price)<<endl;
    }

}

// } Driver Code Ends