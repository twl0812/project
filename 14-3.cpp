#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
    char c;
    try {
        cout << "move a,s,w,d: ";
        cin >> c;
        if((c!='a')&&(c!='s')&&(c!='w')&&(c!='d')) throw 0;
    }
    catch(int num)
    {
        cout<<"오류: a,s,w,d중선택"<<endl;
    }
    cout<<c<<endl;
}