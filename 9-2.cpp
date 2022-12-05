#include <iostream>
using namespace std;
class Line {
public:
    int getLength( void )
    {
        return *(this->ptr);
    }
    void setL(int ien) //ptr set
    {
        *ptr=ien;
    }
    Line( int len );
    Line(const Line& l) //복사생성자 정의
    {
        cout<<"복생"<<endl;
        this->ptr=new int;
        *(this->ptr)=*(l.ptr); //deep copy
    }
    ~Line();
    void print()
    {
        cout<<*ptr;
    }
private:
    int *ptr;
//선의 길이를 저장한다.
};
//일반 생성자 소멸자
Line::Line (int len) {
    cout << "일반 생성자!" << endl;
    ptr = new int;
    *ptr = len;
}
Line::~Line() {
    delete ptr;
}
int main()
{
    Line L1(10);
    Line L2=L1;
    cout<<L1.getLength()<<endl;
    L2.setL(5);
    cout<<L1.getLength();
}

