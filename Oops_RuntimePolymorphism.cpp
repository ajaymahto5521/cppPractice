//Create Animal and Dog classes using virtual function.
#include <iostream>
using namespace std;

class Animal
{
public:

    virtual void sound()
    {
        cout<<"Animal Sound";
    }
};

class Dog : public Animal
{
public:

    void sound() override
    {
        cout<<"Bark";
    }
};

int main()
{
    Animal *ptr;

    Dog d;

    ptr=&d;

    ptr->sound();
}