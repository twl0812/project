#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
    int num;
    try {
        cout << "age: ";
        cin >> num;
        if(num<=0) throw -999;
        cout<<num;
    }
    catch(int num) //throw한 것을 받아옴
    {
        cout<<"오류: 양수를 입력해야함"<<endl;
    }

}