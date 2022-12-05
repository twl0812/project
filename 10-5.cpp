#include <iostream>
#include <string>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
public:
    Time() : hours(0), minutes (0) { }
    Time(int h, int m) : hours{h}, minutes{m} { }
    Time & operator++(int) //++조건을만듬
    {
        if(minutes==59) 
        {
            if(hours==23)
            {
                hours=0;
                minutes=0;
            }
            else {
                hours++;
                minutes = 0;
            }
        }
        else
        {
            minutes++;
        }
        return *this;
    }
    void displayTime(){
    cout << hours << ": " << minutes <<endl;
}
};
int main()
{
    Time t(23,59);
    t.displayTime();
    t++;
    t.displayTime();
    t++;
    t.displayTime();
    t++;
}
