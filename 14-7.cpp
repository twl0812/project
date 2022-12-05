#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
template<typename T>
class Circle {
public:
    T x,y,r;
    Circle(T _x,T _y,T _z):x(_x),y(_y),r(_z){}
    double area();
};
template<typename T>
double Circle<T>::area() {
    return 3.14*r*r;
}

int main()
{
    Circle<double> A(0.0,0.0,10.0);
    cout<<A.area()<<endl;
}