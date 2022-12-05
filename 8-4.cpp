#include <iostream>
using namespace std;
class Time{
public:
   int hour,min,sec;
   Time():hour(0),min(0),sec(0){}//생성자 def
   Time(int h,int m,int s):hour(h),min(m),sec(s){} //생성자
   void print()
   {
       cout<<hour<<":"<<min<<":"<<sec<<endl;
   }
};
bool isEqual(Time& T1,Time &T2) //callbyrep
{
    return ( (T1.hour==T2.hour) && (T1.min==T2.min) && (T1.sec==T2.sec));
}
bool isEqual(Time* T1,Time *T2) //overloading
{
    return ( (T1->hour==T2->hour) && (T1->min==T2->min) && (T1->sec==T2->sec));
}
int main()
{
    Time T1(12,11,33);
    Time T2(12,11,33);
    Time *PT1=new Time(12,11,33);
    Time *PT2=new Time(12,11,33);
    if(isEqual(T1,T2)) cout<<"rep같음"<<endl;
    if(isEqual(PT1,PT2)) cout<<"point같음";

}