#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    ifstream is("input.txt");
    string s="";
    while(1)
    {
        char c=0;
        is.get(c);
        if(is.eof()) break;
        s+=c;
    }
    is.close();
    int i=0;
    ofstream os("output.txt");
    while(s[i])
    {
        os<<(char) toupper(s[i]);
        i++;
    }
}