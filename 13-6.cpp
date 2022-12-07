#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
    ifstream is("decode.txt");
    string s="";
    while(1)
    {
        char c;
        is.get(c);
        if(is.eof()) break;
        if(c>='D' && c<='Z') //알파벳 변경
        {
            s+=c-'D'+'a';
        }
        else if(c>='A'&& c<='C')
        {
            s+=c-'A'+'x';
        }
        else if(c>='a' && c<='w')
        {
            s+=c-'a'+'D';
        }
        else if(c>='x' && c<='z')
        {
            s+=c-'x'+'A';
        }
        else
        {
            s+=c;
        }
    }
    cout<<s<<endl;
}