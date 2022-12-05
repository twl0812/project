#include <iostream>
#include <string>
using namespace std;

class HomeAppliance {
public:
    int price;
    int discount;
virtual double getPrice() = 0;
};
class Television:public HomeAppliance{
public:
    Television(int p){
        price=p;
        discount=10;
    }
    double getPrice(){
        return price*(100-discount)/100;
    }
};
class Refirgerator:public HomeAppliance{
public:
    Refirgerator(int p){
        price=p;
        discount=5;
    }
    double getPrice(){
        return price*(100-discount)/100;
    }
};
int main()
{
    Television k(300000);
    Television a(200000);
    Refirgerator p(100000);
    cout<<k.getPrice()<<endl;
    cout<<a.getPrice()<<endl;
    cout<<p.getPrice()<<endl;
}