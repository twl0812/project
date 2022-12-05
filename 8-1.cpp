#include <iostream>
using namespace std;
int main()
{
    cout<<"몇 개의 정수를 입력합니까? ";
    int num;
    cin>>num;
    int *p=new int[num]; //동적배열 생성
    for(auto i=0;i<num;i++)
    {
        cout<<"정수를 입력하시오 : ";
        cin>>p[i];
    }
    cout<<"\n 입력된 정수는: "; 
    for(auto i=0;i<num;i++)
    {
        cout<<p[i]<<" "; //포인터는 배열로 접근가능
    }
    delete[] p; //할당을 해주었을경우 프로그램이 끝날때 delete
}