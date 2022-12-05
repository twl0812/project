#include <iostream>
using namespace std;
int main()
{
    cout<<"얼마나 많은 이름을 입력합니까? ";
    int num;
    cin>>num;
    string *p=new string[num]; //동적배열 생성
    for(auto i=0;i<num;i++)
    {
        cout<<"이름을 입력하시오 : ";
        cin>>p[i];
    }
    cout<<"\n 이름목록\n";
    for(auto i=0;i<num;i++)
    {
        cout<<"이름 #"+ to_string(i)+" : "+p[i]<<endl; //포인터는 배열로 접근가능
    }
    delete[] p; //할당을 해주었을경우 프로그램이 끝날때 delete
}