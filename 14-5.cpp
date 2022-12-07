#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
template <typename T> //template
double getAverage(T arr[],int num) //average=double
{
    T sum=0;
    double average=0;
    for(auto i=0;i<num;i++)
    {
        sum+=arr[i];
    }
    average=(double)sum/(double)num;
    return average;
}
int main()
{
    double list[] = { 1.2, 3.3, 9.0, 1.5, 8.7 };
    cout<<getAverage(list,5);
}