// problem of the day gfg 22 feb.
#include<iostream>
#include<bits/stdc++.h>
#include<limits>
using namespace std;

int main()
{ 
     
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
    
return 0;
}