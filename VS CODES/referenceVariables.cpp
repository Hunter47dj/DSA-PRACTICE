#include<iostream>
using namespace std;

 
// int& func(int n)     // bad practice as life span of a and ans is only inside block.
// {
//     int a=5;
//     int &ans= a;
//     return ans;
// }

void update(int & n)       //pass by reference  
{                           // NO new memory creation happens here
    n++;
}


int SumofArray(int arr[], int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    return sum;
    
}

int main()
{ 
    // int i=7;
    // int &j=i;     // creating a reference variable

    // cout<<"i="<<i<<endl;
    // cout<<"j="<<j<<endl;
    // j++;                  // either update by j or i , value will change 
    // cout<<"i="<<i<<endl;
    // i++;
    // cout<<"j="<<j<<endl;


    int j=6;
    // cout<<"before "<<j<<endl;  //6
    // update(j);
    // cout<<"after "<<j<<endl;   //7

    // func(j);   bad practice

    // DYNAMIC MEMORY ALLOCATION IN HEAP---------------------------------

    // char c='q';
    // cout<<"size "<<sizeof(c)<<endl;     //1
    // char * ch = &c;
    // cout<<"size "<<sizeof(ch)<<endl;    //4 in 32-bit systm and 8 in 64-bit system

    // int i=4;
    // cout<<"size "<<sizeof(i)<<endl;    //4 

    // int * ptr= &i;
    // cout<<"size "<<sizeof(ptr)<<endl;  //4 in 32-bit systm and 8 in 64-bit system

    

    // DYNAMIC ARRAY ALLOCATION ------------------------


    // int *ptr = new int[5];

    // for (int i = 0; i < 5; i++)
    // {
    //     cin>>ptr[i];
    // }
    // cout<<"dynamic array is ";
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<ptr[i]<<" ";
    // }

    // int sum= SumofArray(ptr,5);  // sending dynamic array to a function 

    // cout<<"\n sum of array is "<<sum;

    
    

return 0;
}