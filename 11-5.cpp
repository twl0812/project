#include <iostream>
#include <string>
using namespace std;
class Shape {
    int x, y;
    string color;
    double getArea ();
public:
    Shape():x(0),y(0){}
    Shape(int _x,int _y):x(_x),y(_y){}
    int getx(){
        return x;
    }
    int gety(){
        return y;
    }
    void setx(int a){
        x=a;
    }
    void sety(int b)
    {
        y=b;
    }
};
class Circle:public Shape{
    int r;
public:
    Circle(int a,int b,int _r):Shape(a,b),r(_r){}
    double getArea()
    {
        return 3.14*r*r;
    }
};
int main()
{
    Circle a(0,0,20);
    cout<<a.getArea()<<endl;
}