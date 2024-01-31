#include<iostream>
using namespace std;

// factorial of number using recursion..

int fact(int num){
    if(num<=1)
        return 1;
    return num* fact(num-1);
}

// power of 2 till n

int powTWO(int n)
{
    if(n==0)
        return 1;
    return 2* powTWO(n-1);
}

// print the counting upto n 

void count(int n)
{   
    if(n==0)
        return ;
    //cout<<n<<" ";    // decrasing recurssion
    count(n-1);

    cout<<n<<" ";  // increasing recurssion
}

int main()
{ 
    int num; cout<<"num: "; cin>>num;

    cout<<"factorial :"<<fact(num)<<endl;    // factorial

    printf("2 power %d is %d \n",num,powTWO(num));  // 2 power n 

    count(num);

return 0;
}