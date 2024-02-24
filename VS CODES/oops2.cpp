#include<iostream>
using namespace std;

class A {
    public:
    int add(int x, int y, int z =0)
    {
        return x+y+z;
    }
    
};
class B  {
    public:
    int add(int x, int y, int z =0)
    {
        return x+y+z;
    }
    
};
class C : public B, public A {
    
};

int main()
{ 
    
    C obj;
    cout<<obj.A::add(20,30)<<endl;
    cout<<obj.B::add(2,30);



return 0;
}