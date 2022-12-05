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
    vector<int> year;
    year.push_back(2012);
    year.push_back(2013);
    year.push_back(2014);

    auto it=find_if(year.begin(), year.end(),[](int x){return x%4==0;});
     cout<<*it<<" ";

}