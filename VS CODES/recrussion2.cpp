#include<iostream>
#include<map>
using namespace std;

//nth number of fibonnacci series using recrussion 0112358

int fib(int n)
{
    if(n==0)
        return 0;
    if (n==1)
    {
        return 1;
    }
    
    return fib(n-1)+fib(n-2);
}

// CLIMB STAIRS 

int climb(int n)
{
    if(n<0)
        return 0;
    if(n==0)
        return 1;
    return climb(n-1) + climb(n-2);
}


string arr[]= {"zero","one","two","three","four","five","six","seven","eight","nine"};
            
void saynumber(int n)
{
    if(n==0)
    return;

    

    saynumber(n/10);
    int digit= n%10;
    cout<<arr[digit]<<" ";
}


int main()
{ 
    int n; cout<<"n : "; cin>>n;
    // cout<<"fib: "<<fib(n)<<endl;

    // cout<<"climb ways :"<<climb(n)<<endl;

    saynumber(n);

return 0;
}