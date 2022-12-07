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
    srand(time(NULL));
    set<int> num; //중복x
    while(num.size()!=6)
    {
        int r=rand()%45;
        num.insert(r+1);
    }
    for(auto i=num.begin();i!=num.end();i++)
    {
        cout<<*i<<" ";
    }
}