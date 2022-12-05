#include <iostream>
#include <string>
using namespace std;

class Person{
    int age;
    string job;
    void myage()
    {
        cout<<age<<endl;
    }
    void eat()
    {
        cout<<"eating!"<<endl;
    }
    void talk()
    {
        cout<<"talking!"<<endl;
    }
    void run()
    {
        cout<<"running"<<endl;
    }
    void myjob()
    {
        cout<<job<<endl;
    }
public:
    Person(int a=0):age(a),job(""){

    }
    void teach()
    {
        job="교수";
    }
    void playTennis()
    {
        job="테니스 선수";
    }
    void Businessman()
    {
        job="사업가";
    }
    void show()
    {
        myjob();
        myage();
        run();
        talk();
        eat();
    }
};
class Professer:public Person{
public:
    Professer(int a=0): Person(a){
        teach();
    }
    void show()
    {
        Person::show();
        cout<<"teach!"<<endl;
    }
};
class TennisPlayer:public Person{
public:
    TennisPlayer(int a=0): Person(a){
        playTennis();
    }
    void show()
    {
        Person::show();
        cout<<"play tennis"<<endl;
    }
};
class Businessman:public Person{
public:
    Businessman(int a=0): Person(a){
        playTennis();
    }
    void show()
    {
        Person::show();
        cout<<"business!"<<endl;
    }
};
int main()
{
    Professer a(39);
    TennisPlayer b(23);
    a.show();
    cout<<endl;
    b.show();
}