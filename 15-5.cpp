#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
using namespace std;
class Student{
    string name;
    string address;
    int id;
    string tel;
public:
    Student(string n="",string a="",int i=0,string t=""):name(n),address(a),id(i),tel(t){}
    //설정자
    void setn(string n) 
    {
        name=n;
    }
    void seta(string b)
    {
        address=b;
    }
    void setid(int d)
    {
        id=d;
    }
    void sett(string t)
    {
        tel=t;
    }
    //접근자
    string getn()
    {
        return name;
    }
    string geta()
    {
        return address;
    }
    int getid()
    {
        return id;
    }
    string gett()
    {
        return tel;
    }
    void show()
    {
        cout<<name<<endl;
        cout<<address<<endl;
        cout<<id<<endl;
        cout<<tel<<endl;
    }
};
int main()
{
    map<string,Student> info; //map을 이용
    while(1)
    {
        cout<<"추가 : 1, 검색: 2,삭제: 3, 모두보기: 4,종료: 5"<<endl;
        int a;
        cin>>a;
        if(a==1)
        {
            cout<<"추가"<<endl;
            string n,a,t;
            int i;
            cout<<"name: "<<endl;
            cin>>n;
            cout<<"address: "<<endl;
            cin>>a;
            cout<<"id: "<<endl;
            cin>>i;
            cout<<"tel: "<<endl;
            cin>>t;
            info[n]= Student(n,a,i,t);
            cout<<"complete!"<<endl;
        }
        if(a==2)
        {
            cout<<"검색"<<endl;
            string s;
            cin>>s;
            if(info[s].getn()==s)
            {
                info[s].show();
            }
            else cout<<"Nothing"<<endl;
        }
        if(a==3)
        {
            cout<<"삭제"<<endl;
            string s;
            cin>>s;

            if(info[s].getn()==s) {
                info.erase(s);
                cout<<"complete"<<endl;
            }
            else cout<<"NO";
        }
        if(a==4)
        {
            cout<<"모두보기"<<endl;
            for(auto i=info.begin();i!=info.end();i++)
            {
                i->second.show();
                cout<<endl;
            }
        }
        if(a==5) break;
    }
}