#include <iostream>
#include <string>
using namespace std;

class Shape {
public:
    int x, y;
    Shape(int _x=0,int _y=0):x(_x),y(_y){}
    virtual double getArea () = 0;
};
class Rect:public Shape{
public:
    int width;
    int height;
    double getArea()
    {
        return width*height;
    }
    Rect(int a,int b,int c,int d): Shape(a,b),width(c),height(d){}
};
class  Circle:public Shape{
public:
    int radius;
    double getArea()
    {
        return 3.14*radius*radius;
    }
    Circle(int a,int b,int c): Shape(a,b),radius(c){}
};
class Triangle:public Shape{
public:
    int width;
    int height;
    double getArea(){
     return width*height/2;
    }
    Triangle(int a,int b,int c,int d): Shape(a,b),width(c),height(d){}
};
int main()
{
    Shape *s[3];
    s[0]=new Rect(0,0,10,20);
    cout<<"사각형1:"<<s[0]->getArea()<<endl;
    s[1]=new Circle(0,0,2);
    cout<<"원2:"<<s[1]->getArea()<<endl;
    s[2]=new Triangle(0,0,10,20);
    cout<<"삼각형3:"<<s[2]->getArea()<<endl;
}