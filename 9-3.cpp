#include <iostream>
#include <string>
using namespace std;
class MyClass {
public:
    MyClass(const char *str);

    MyClass(const MyClass & c) //복사생성자
    {
        this->stored=new char[strlen(c.stored)+1]; //공간할당
        cout<< "복생"<<endl;
            strcpy(this->stored,c.stored); //strcpy는 callbyvalue ,deepcopy
    }
    void gets()
    {
        for(auto i=0;i< strlen(stored);i++)
        {
            cout<<stored[i];
        }
        cout<<endl;
    }
    ~MyClass();
    char* stored;
};
MyClass::MyClass( const char* str )
{
stored = new char[strlen( str ) + 1 ];
strcpy( stored, str );
}
MyClass::~MyClass() {
    delete[] stored;
}
int main()
{
  MyClass c1("umjs");
  MyClass c2=c1;
  c1.gets();
  c2.stored[0]='c';
  c1.gets();
  c2.gets();
}