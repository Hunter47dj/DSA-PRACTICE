#include<bits/stdc++.h>
using namespace std;

class A    
{
    public:
    void fun1()
    {
        cout<<"class A func 1";
    }
};


class B : public A  
{
    public:
    void fun2()
    {   
        cout<<"class B func 2";
    }
};


class C : public A  
{
    public:
    void fun3()
    {
        cout<<"class c func 3";
    }
};


// class D 
// {
//     public:
//     void fun4()
//     {   
//         cout<<"class D func 4";
//     }
// };

int main()
{

    A obj1;
    obj1.fun1();

    B obj2;
    // obj2.fun1();  // single level inheritance;
    obj2.fun2();
    obj2.fun1();  //  

    C obj3;
    obj3.fun3();
    // obj3.fun2();   // multi level inheritance;
    obj3.fun1();

    return 0;

}