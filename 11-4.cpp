#include <iostream>
#include <string>
using namespace std;

class Person {
    string name;
    string address;
    string tel;
public:
    Person():name(""),address(""),tel(" "){}
    Person(string n,string a,string t):name(n),address(a),tel(t){}
    string getn()
    {
        return  name;
    }
    string geta()
    {
        return address;
    }
    string gett()
    {
        return tel;
    }
    void setn(string s)
    {
        name=s;
    }
    void seta(string a)
    {
        address=a;
    }
    void sett(string t)
    {
        tel=t;
    }
};
class Customer:public Person{ //상속
    int id;
    int mileage;
public:
    Customer(string n,string a,string t,int i,int m):Person(n,a,t),id(i),mileage(m){}

    int getid()
    {
        return id;
    }
    void setid(int i)
    {
        id=i;
    }
    int getm()
    {
        return mileage;
    }
    void setm(int m)
    {
        mileage=m;
    }
};
int main()
{
    Customer m("엄준식","신안시","010-4444-4444",1,1000);
    cout<<m.getn()<<endl;
    cout<<m.geta()<<endl;
    cout<<m.gett()<<endl;
    cout<<m.getid()<<endl;
    cout<<m.getm()<<endl;
}

