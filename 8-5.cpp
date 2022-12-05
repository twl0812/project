#include <iostream>
using namespace std;
class Student{
    string name;
public:
    Student (string _name = "") : name(_name) {}
    string getName()
    {
        return name;
    }
    void setName (string name) { this->name = name; }
};
class MyClass {
public:
    string className;
    Student *p;
    int size;
};
int main()
{
    MyClass c;
    c.className="special";
    c.size=3;
    c.p=new Student[c.size]; //공간생성
    for(auto i=0;i<c.size;i++) {
        c.p[i].setName("홍길동"+ to_string(i));
      cout<<c.p[i].getName()<<endl;
    }
    delete[] c.p; //공간소멸
}