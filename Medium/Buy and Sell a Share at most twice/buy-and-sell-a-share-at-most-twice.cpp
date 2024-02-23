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
                int F_buy = INT_MIN;
                int F_sell = 0;
            
                int S_buy = INT_MIN;
                int S_sell = 0;

               
                for (int i = 0; i < price.size(); i++)
                {
                    F_buy = max(F_buy,-price[i]);     // -10         // -10                 // -5           // -5       //-5        //-5
                    F_sell = max(F_sell,price[i]+F_buy);   // -10+10 =0      //22 -10 =12        // 12           //70        //70        //75
                    S_buy = max(S_buy,F_sell-price[i]);   // -10            //12-22 = -10       // 12 -5 = 7    //7         //7         //7
                    S_sell = max(S_sell,price[i]+S_buy);   // 0              // 22 + -10 = 12    // 12           //82        //82        //87
                }
            
                return S_sell;  
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