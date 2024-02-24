#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maximum(int n,int sum)
{
    // base case 
    if(n == 0)
    { 
        return 0;
    }
    if (n==1)
    { 
        return 1;
    }

    int newSum =  maximum(n/2,sum) + maximum(n/3,sum) + maximum(n/4,sum) ;

    return max(sum,newSum);
}

int main()
{ 
    int num = 999;
    // cin>>num;
    cout<<"max sum "<<maximum(num,0);
return 0;
}