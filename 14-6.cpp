#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
template<typename T> //template
bool isEqual(T arr[],T arr2[],int num)
{
    bool check= true;
    for(int i=0;i<num;i++)
    {
        if(arr[i]!=arr2[i]) {
            check= false;
            break;
        }
    }
    return check;
}
int main()
{
    double list[] = { 1.2, 3.3, 9.0, 1.5, 8.7 };
    double list2[] = { 1.2, 3.3, 9.0, 1.5, 8.7 };
    cout<<boolalpha;
    cout<<isEqual(list,list2,5);

}