#include <iostream>
#include <string>
using namespace std;

class Point {
    int x, y;
public:
    Point():x(0),y(0){}
    Point(int _x,int _y):x(_x),y(_y){}
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
    void setx(int v)
    {
        x=v;
    }
    void sety(int v)
    {
        y=v;
    }
};
class ThreeDPoint:public Point{ //상속
int z;
public:
    int getz()
    {
        return z;
    }
    void setz(int v)
    {
        z=v;
    }
    ThreeDPoint():Point(),z(0){}
    ThreeDPoint(int _x,int _y,int _z):Point(_x,_y),z(_z){}
    ThreeDPoint operator+(ThreeDPoint &p)
    {
        ThreeDPoint temp;
        temp.setx(this->getx()+p.getx());
        temp.sety(this->gety()+p.gety());
        temp.setz(this->getz()+ p.getz());
        return temp;
    }
    void print()
    {
        cout<<getx()<<" "<<gety()<<" "<<getz()<<endl;
    }
};
int main()
{
    ThreeDPoint p1(10, 10, 10);
    ThreeDPoint p2(10,10,10);
    ThreeDPoint p3=p1+p2;
    p3.print();
}