#include <iostream>
#include <string>
using namespace std;

class Point {
private:
    double xval,yval;
public:
    Point (double x = 0.0, double y = 0.0) :xval(x),yval(y){}

    double getX() { return xval;}
    double getY() { return yval; }
};
void swap(Point &p1,Point &p2)//call by referance로 넘겨줘야함 -> 클래스는 referance임
{
    Point temp=p1;
    p1=p2;
    p2=temp;
}
int main()
{
    Point p1(10,1);
    Point p2(20,2);
    swap(p1,p2);
    cout<<p1.getX()<<" "<<p1.getY();
}