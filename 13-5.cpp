#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
    ifstream is("sample.txt");
    ifstream is2("sample2.txt");
    vector<string> arr;
    vector<string> arr2;
    string s;
    bool check= true;
    while(getline(is,s)) //파일끝까지
    {
        arr.push_back(s); //백터에 넣어줌
    }
    while(getline(is2,s))
    {
        arr2.push_back(s); //벡터에넣어줌
    }
    for(int i=0;i<arr.size();i++)
    {
        if(i==arr2.size())
        {
            check= false;
            break;
        }
        if(arr[i]!=arr2[i]) check= false;
    }

    if(check== true)
    {
        cout<<"표절입니다."<<endl;
    }
    else {
        cout<<"표절x"<<endl;
    }
}