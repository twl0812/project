#include <iostream>
#include <string>
using namespace std;

class Box {
public:
    double length;
    double width;
    double height;
    static int cnt; //static 변수 선언
    Box (double l = 2.0, double w = 2.0, double h = 2.0) {
        cnt++;
        length = l;
        width = w;
        height = h;
    }
    Box(const Box & b)
    {
        cnt++;
        *this=b;
    }
    double Volume() {
        return length * width * height;
    }
    friend void print(Box &b);
};
int Box::cnt=0;//변수 초기화
void print(Box &b)
{
    
}
int main()
{
    Box b1(1,2,3);
    Box b4=b1;
    Box b2(12,22,33);
    Box b3(1,52,3);
    print(b1);
    cout<<Box::cnt<<endl; 
}