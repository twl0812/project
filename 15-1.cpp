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
    vector<int> arr; //vector use
    int a;
    while(1)
    {
        cin>>a;
        if(a<0) break;
        arr.push_back(a);
    }
    int sum=0;
//    for(auto i:arr)
//    {
//        sum+=i;
//    }
for(auto i=arr.begin();i<arr.end();i++) //iterator
    {
        sum+=*i;
    }
    double average=(double)sum/(double)arr.size();
    cout<<average;
}
