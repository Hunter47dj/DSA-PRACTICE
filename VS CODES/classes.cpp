#include<iostream>
// #include "bubbleSort.cpp" // can include files having other classes
using namespace std;


class hero
{
    char level;
    static int temp; // static variables dont cotribute in the size of class n object
    int health;   // size will be 8 due to padding
    public: 

    public:
    // setters
    void sethealth(int health)
    {
        this->health =health;
    }
    void setlevel(char level)
    {
        this->level =level;
    }

    // getters
    int gethealth()
    {
        return health;
    }
    char getlevel()
    {
        return level;
    }
} h1;




int main()
{ 
    hero h2;

    cout<<"size of object "<<sizeof(h1)<<endl;
    cout<<"size of object "<<sizeof(h2)<<endl;
    cout<<"size of class "<<sizeof(hero)<<endl;  // empty class,object has size 1;

    // accessing the data memebers

    // h2.health = 30;

    // cout<<"health of player "<<h2.health<<endl;

    // dynamic object creartion

    hero *ramesh = new hero;

    // using getter and setters to set the values

    ramesh->setlevel('a');
    ramesh->sethealth(30);

    cout<<"private level "<<ramesh->getlevel()<<endl;
    cout<<"private health "<<ramesh->gethealth()<<endl;


return 0;
}