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
#include<time.h>
using namespace std;
template<typename T>
bool is_even(T a)
{
    return a%2==0;
}
int main()
{
    srand(time(NULL));// 난수시드값
    vector<int> arr;
    int a;
   for(int i=0;i<100;i++)
   {
       arr.push_back(rand()%100);
   }
   int n= count_if(arr.begin(), arr.end(),[](int x){return x%2==0;}); //갯수반환
   cout<<endl<<n;

}
