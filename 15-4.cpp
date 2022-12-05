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
    dic["evening"]="저녁";
    dic["boy"]="소년";
    dic["school"]="학교";
    dic["company"]="직장";
    dic["ssss"]="ssss";
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
            vector<string> arr;
            vector<string> ans;
            for(auto i=dic.begin();i!=dic.end();i++)
            {
                arr.push_back(i->first);
                ans.push_back(i->second);
            }
                int r=rand()%(arr.size());
                cout<<arr[r]<<"의 의미? ";
                string pick=dic[arr[r]];
                ans.push_back(pick);
                string temp=ans[0];
                ans[0]=ans[ans.size()-1];
                ans[ans.size()-1]=temp;
            sort(ans.begin(), ans.begin()+3);
            for(int i=0;i<3;i++)
            {
                if(ans[i]==ans[i+1])
                {
                    ans[i]=*(ans.end()-1);
                }
            }
                for(int i=0;i<4;i++)
                {
                    cout<<i+1<<" "<<ans[i]<<" ";
                }
                int k;
                cin>>k;
                if(dic[arr[r]]==ans[k-1])
                {
                    cout<<"OK"<<endl;
                }


        }
        if(x==3) break;
    }
}