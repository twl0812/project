#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    ifstream is("input.txt");
    int len;
    is.seekg(0,is.end); //파일끝으로 이동
    len=is.tellg(); //끝값대입
    is.seekg(0,is.beg); //처음으로 이동
    string s="";
    while(1)
    {
        char c=0;
        is.get(c);
        if(is.eof()) break;
        s+=c;
    }
    for(int i=len-1;i>=0;i--)
    {
        cout<<s[i];
    }
}