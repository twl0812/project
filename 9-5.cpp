#include <iostream>
#include <string>
using namespace std;

class Box {
private:
    double length;
    double width;
    double height;
public:
    static int cnt; //static 변수 선언
    Box (double l = 2.0, double w = 2.0, double h = 2.0) {
        cnt++;
        length = l;
        width = w;
        height = h;
    }
    double Volume() {
        return length * width * height;
    }
};
int Box::cnt=0;//변수 초기화
int main()
{
    Box b1(1,2,3);
    Box b2(12,22,33);
    Box b3(1,52,3);
    cout<<Box::cnt<<endl; 
}