#include <iostream>
using namespace std;
class Circle {
public:
    int x, y;
    int radius;
    Circle() : x( 0 ), y( 0 ), radius( 0 ) { }
    Circle(int x, int y, int r) : x( x ), y( y ), radius( r ) { }
    Circle(const Circle & C) //복사생성자 코드
    {
        cout<<"복생 호출"<<endl;
        int temp=C.x;
        this->x=temp;
        temp=C.y;
        this->y=temp;
        temp=radius;
        this->radius=temp;
    }
    void print() {
        cout << "Circle("<< radius << ")" << endl;
    }
};
Circle getL(Circle c1,Circle c2)
{
    return (c1.radius>c2.radius) ? c1:c2;
}
int main()
{
    Circle c1(0,0,10);
    Circle c2(0,0,20);
    Circle c3=c1;//복사생성자불림
    getL(c1,c2); // 함수파라미터로 들어갈때,리턴할때
}