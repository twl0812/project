#include <iostream>
#include <string>
using namespace std;

class GameCharacter {
public:
    GameCharacter () {}
    virtual void draw() = 0;
};
class Hobbit:public GameCharacter{
public:
    Hobbit(){}
    void draw()
    {
        cout<<"hobbit draw"<<endl;
    }
};
class Sorcerer:public GameCharacter{
public:
    Sorcerer(){}
    void draw()
    {
        cout<<"sorcerer draw"<<endl;
    }
};
int main()
{
    GameCharacter *p[3];
    p[0]=new Hobbit();
    p[1]=new Sorcerer();
    p[2]=new Hobbit();
    for(auto i:p)
    {
        i->draw();
    }
}