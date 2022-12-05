#include <iostream>
#include <string>
using namespace std;

class Box {
private:
    double length;
    double width;
    double height;
public:
    friend void printBox(Box b);//friend
    Box operator+(Box &b)
    {
       return Box(this->length+b.length,this->width+b.width,this->height+b.height); //연산자
    }
    bool operator==(Box &b) //== bool type
    {
        return (this->Volume()==b.Volume());
    }
    bool operator<(Box &b) //< bool type
    {
        return (this->Volume()<b.Volume());
    }
    void show()
    {
        cout<<length<<" "<<width<<" "<<height<<endl;
    }
    Box (double l = 2.0, double w = 2.0, double h = 2.0) :length(l),width(w),height(h){}
    double Volume() {
        return length * width * height;
    }
};
void printBox(Box b)
{
    cout<<b.length<<" "<<b.width<<" "<<b.height<<endl;
}
int main()
{
  Box a(10,10,10),b(20,20,20);
    printBox(a);
}