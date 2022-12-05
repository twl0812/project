#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
    string s;
    try {
        cout << "가위바위보!: ";
        cin >> s;
        if((s!="가위")&&(s!="보")&&(s!="바위")) throw 0;
    }
    catch(int num)
    {
        cout<<"오류: 가위,바위,보중에서 선택하시오"<<endl;
    }
    cout<<s<<endl;
}