#include<iostream>
using namespace std;

int main()
{ 
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for (int i = 0; i < 10; i++)
    {
        int next= a+b;
        a=b;
        b=next;
        cout<<b<<" ";
    }
    
return 0;
}