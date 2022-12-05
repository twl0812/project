#include <iostream>
using namespace std;
class Circle {
    int radius;
public:
    void setRadius(int _r)
    {
        radius=_r;
    }
    int getRadius() //반지름 출력을위한 메소드
    {
        return radius;
    }
    double getArea()
    {
        return radius*radius*3.14;
    }
};
int main()
{
    cout<<"생성할 원의 수 ";
    int num;
    cin>>num;
    Circle *p=new Circle[num]; //동적배열 생성
    int cnt=0; //카운트
    for(auto i=0;i<num;i++)
    {

        int a=rand(); //난수 발생
        a%=100; //범위 0~99
        a++; //범위 1~100
        p[i].setRadius(a);
        if(p[i].getArea()>100.0){
            cnt++;
        }
    }
    for(auto i=0;i<num;i++)
    {
        cout<<"원"+ to_string(i+1)+"의 반지름 >> "<<p[i].getRadius()<<endl;
    }
    cout<<cnt<<endl;
    delete[] p; //할당을 해주었을경우 프로그램이 끝날때 delete
}