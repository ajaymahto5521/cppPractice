//Create Car which HAS-A Engine.
#include <iostream>
using namespace std;

class Engine
{
public:

    void start()
    {
        cout<<"Engine Started"<<endl;
    }
};

class Car
{
private:

    Engine engine;

public:

    void drive()
    {
        engine.start();
        cout<<"Car Running";
    }
};

int main()
{
    Car c;

    c.drive();
}