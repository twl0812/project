#include <iostream>
#include <string>
using namespace std;

class Employee {
    string name;
    int salary;
public:
    Employee():name(""),salary(0){}
    Employee(string _name,int s):name(_name),salary(s){}
    string getn()
    {
        return  name;
    }
    int gets()
    {
        return salary;
    }
    void setn(string s)
    {
        name=s;
    }
    void sets(int s)
    {
        salary=s;
    }
    int compute()
    {
        return 12*salary;
    }
};
class Manager:public Employee{ //상속
    int bonus;
public:
    Manager(string s,int a,int b):Employee(s,a),bonus(b){}
    int getb()
    {
        return bonus;
    }
    void setb(int b)
    {
        bonus=b;
    }
    int compute() //overriding
    {
        return 12*gets()+getb();
    }
};
int main()
{
    Manager m("엄준식",200,100);
    cout<<m.getn()<<endl;
    cout<<m.gets()<<endl;
    cout<<m.getb()<<endl;
    cout<<m.compute()<<endl;
}

