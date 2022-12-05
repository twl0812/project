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
#include <time.h>
using namespace std;
int main()
{
    queue<string> male;
    queue<string> female;
    while(1) {
        string name;
        char sex;
        cout<<"name: ";
        cin>>name;
        cout<<"sex: ";
        cin>>sex;
        if(sex=='m')
        {
            male.push(name);
        }
        if(sex=='f')
        {
            female.push(name);
        }
        if(male.size()!=0 && female.size()!=0)
        {
            cout<<male.front()+"&"+female.front()<<endl;
            break;
        }

    }
}