#include<iostream>
using namespace std;

int main()
{ 
    int n=12,i;

    for (i = 0; i < n; i++)
    {
        if(n%2==0) 
        {
            cout<<"not prime "; break;
        }
    }
    if(i==n) cout<<"Prime ";
    
return 0;
}