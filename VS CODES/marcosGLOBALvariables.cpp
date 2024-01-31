#include<iostream>
using namespace std;

// MACROS can not be RECURSSIVE .
// If a macro become recurssive then defination refers to itself,
// and it will become an infinte loop during preprocessing .

// creating macros

// object like macro 
#define pi 3.24

// chained macro
#define instagram followers
#define followers 135

// multi-line macros
#define ELEMENTS 1, \
                2, \
                3

// Function- like macros
#define MIN(a,b) (a<b ? a:b)



// GLOBAL VARIABLES----------------------------

int a=5;
 //this is a global variable that can be used and modified by any function of the progam

// default arguments
void defArgFun(int b, string greet = "hello")    //default agruments should be placed right to left
{

    cout<<"default argument check , greet = "<<greet;
}



// inline function read from notes its nothing ..... very easy
// = puting body of function where function is called when the body of function is around 1 or 2 lines






int main()
{ 
    // types of MACROS
    // object-like macros
    int r=2;
    float AreaOfCircle = pi*r*r;
    cout<<"area of circle is "<<AreaOfCircle<<endl;

    // chained macro 
    cout<<"my followers on instagram are "<<instagram<<endl;

    // multi line macros
    int arr[]= {ELEMENTS};

    cout<<"elements of array are ";
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int a1=34, a2= 23;

    printf("minimum of %d and %d is %d",a1,a2,MIN(a1,a2));

    cout<<endl;
    cout<<endl;
    cout<<"without giving defARG value"<<endl;
    defArgFun(2);
    cout<<endl;
    cout<<endl;
    cout<<"giving defARG value"<<endl;
    defArgFun(2,"ola");





return 0;
}