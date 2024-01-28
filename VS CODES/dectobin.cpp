#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n=5;
    // cin>>n;
    // float ans =0, i =0;

    // while (n!=0)        
    // {
    //     int digit = n%10;
    //     if(digit==1){
    //         ans = ans+ pow(2,i);
    //     }
    //     n=n/10;
    //     i++;
    // }
    // cout<<ans<<endl;/
    
    // converting decimal to binary
        float ans =0, fans =0;
        int i =0;
        while(n!=0){
            int bit = n&1;
            ans = (bit * pow(10, i)) + ans ;
            n= n>>1;
            i++;
        }
        cout<<ans<<endl;

        // taking complement
        int x = ans;
        cout<<x<<endl;
        ans =0; 
        int k=0;
        while (x)
        {
            int bit = x%10;
        
            ans = (bit^1) * pow(10, k) + ans ;
            x= x/10;
            k++;
        } cout<<ans<<endl;
        
        
        // converting binary to decimal
        int j =0;
        int y=ans;
        while(y!=0){
            int digit = y %10;
            
                fans = digit*pow(2,j) + fans;
                
            
            y = y /10;
            j++;
        }
        
        cout<<fans;
    
}