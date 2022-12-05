#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
template <typename T>
T getSmallest(T arr[],int num)
{
    T min=arr[0];
    for(auto i=1;i<num;i++)
    {
        if(min>arr[i]) min=arr[i];
    }
    return min;
}
int main()
{
    double list[] = { 1.2, 3.3, 9.0, 1.5, 8.7 };
    int list2[]={1,2,3,4,5};
    cout<<getSmallest(list,5)<<endl;
    cout<<getSmallest(list2,5);
}