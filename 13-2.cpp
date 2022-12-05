#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    ifstream is("sample.txt");
    int sum=0;
    while(1)
    {
        char a=0;
        is.get(a);
        if(is.eof())
        {
            break;
        }
        if(a>='0' && a<='9')
        {
            sum+=a-'0';
        }

    }
    cout<<sum;
}