#include <iostream>
#include <string>
using namespace std;

class Weapon {
public:
    virtual void load() = 0;
};
class Bomb:public Weapon{
public:
    void load(){
        cout<<"폭탄은 펑펑!"<<endl;
    }
    Bomb(){}
};
class Gun:public Weapon{
public:
    void load(){
        cout<<"총은 탕탕!"<<endl;
    }
    Gun(){}
};
int main()
{
    Bomb b1;
    Bomb b2;
    Gun g;
    Weapon *p[3];
    p[0]=&g;
    p[1]=&b1;
    p[2]=&b2;
    for(auto i:p)
    {
        i->load();
    }

}