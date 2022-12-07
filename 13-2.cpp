#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    ifstream is("sample.txt"); //read
    int sum=0;
    while(1)
    {
        char a=0;
        is.get(a);
        if(is.eof()) //이런식으로 안해주면 한번더 더함
        {
            break;
        }
        if(a>='0' && a<='9')
        {
            sum+=a-'0';
        }

    }
    cout<<sum<<endl;
}