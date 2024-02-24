#include<iostream>
using namespace std;

class pet 
{
    char level;
    public:
    static int health;
     pet()
    {
        cout<<"constructor called"<<endl;
    }
    pet(int health, char level)
    {
        
        this->health= health;
        this->level= level;
        // cout<<this->health;
    }

    pet(pet &temp, pet &temp2)
    {
        this->health= temp.health;
        this->level = temp2.level;
        cout<<"personal copy construter "<<endl;
    }

   void print()
    {
        cout<<"health "<<health<<endl;
        cout<<"level "<<level<<endl;
    }
    static int random()
    {
        cout<<"static function "<<endl;
    }

    // ~pet()
    // {
    //     cout<<"tabah kr dungaa sbkooo "<<endl;
    // }

};

int pet::health=3;

int main()
{ 
//     pet dog(20,'a');
//     pet parrot(30,'b');

//     dog.print();
//     parrot.print();
    

    // pet *cat = new pet(20);

    // pet billi(dog,parrot);
    

    // pet::health=2;
    // billi.print();

    // pet * cow = new pet;
    // delete cow;

    pet::random();  // static function

return 0;
}