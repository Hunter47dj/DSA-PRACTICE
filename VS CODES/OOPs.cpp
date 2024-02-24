#include<iostream>
using namespace std;

class hero 
{
    void print()
    {
        cout<<level;
    }
    int health=2;

    public:
    // properties
    int level;

    void gethealth()
    {
        cout<<"health"<<health;
    }

} h1;

int main()
{ 
    // h1.health = 20;
    cout<<"size "<<sizeof(h1)<<endl;
    // cout<<"health "<<h1.health<<endl;

    hero h2 ; // static object creation
    // h2 -> gethealth();              // operator -> or ->* applied to "hero" instead of to a pointer type
    h2.gethealth();
    // dynamic object creation
    hero *h3 = new hero;

    // h3 ->health = 30;
    // (*h3).health =30;

return 0;
}