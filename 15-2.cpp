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
template<typename T>
bool is_even(T a)
{
    return a%2==0;
}
int main()
{
    vector<int> arr;
    int a;
   for(int i=0;i<100;i++)
   {
       arr.push_back(rand()%100);
   }
   int n= count_if(arr.begin(), arr.end(),is_even<int>);
   for(auto i:arr) cout<<i<<endl;
   cout<<endl<<n;

}
