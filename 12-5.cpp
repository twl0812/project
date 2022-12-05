#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Animal
{
public:
    virtual void speak() = 0;
    virtual ~Animal () {}
};
class Dog: public Animal {
public:
    virtual void speak() { cout << "멍멍!"<<endl; }
};
class Cat: public Animal {
public:
    virtual void speak() { cout << "야옹!"<<endl; }
};
int main()
{
    vector<Animal *> arr;
    arr.push_back(new Dog);
    arr.push_back(new Cat);
    arr.push_back(new Dog);
    for(auto i:arr)
    {
        i->speak();
    }
}