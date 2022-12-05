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
int main()
{
    map<string,string> dic;
    while(1) {
        int x;
        cout << "단어추가 : 1, 단어테스트 : 2,종료 : 3" << endl;
        cin >> x;
        if (x == 1) {
            string a, b;
            cout << "추가할 단어 ";
            cin >> a;
            cout << "추가할 의미 ";
            cin >> b;
            dic[a] = b;
        }
        if(x==2){
            int cnt=0;
            for(auto i=dic.begin();i!=dic.end();i++)
            {
                cout<<i->first<<"? "<<endl;
                string key;
                cin>>key;
                if(i->second==key) {
                    cout<<"OK"<<endl;
                    cnt++;
                }
            }
            cout<<"맞은답: "+to_string(cnt)<<endl;
        }
        if(x==3) break;#include <iostream>
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
int main()
{
    map<string,string> dic;
    while(1) {
        int x;
        cout << "단어추가 : 1, 단어테스트 : 2,종료 : 3" << endl;
        cin >> x;
        if (x == 1) {
            string a, b;
            cout << "추가할 단어 ";
            cin >> a;
            cout << "추가할 의미 ";
            cin >> b;
            dic[a] = b;
        }
        if(x==2){
            int cnt=0;
            for(auto i=dic.begin();i!=dic.end();i++)
            {
                cout<<i->first<<"? "<<endl;
                string key;
                cin>>key;
                if(i->second==key) {
                    cout<<"OK"<<endl;
                    cnt++;
                }
                else {
                    cout<<"틀"<<endl;
                }
            }
            cout<<"맞은답: "+to_string(cnt)<<endl;
        }
        if(x==3) break;
    }
}
    }
}