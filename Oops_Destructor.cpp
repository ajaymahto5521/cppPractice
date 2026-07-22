//Print a message when object is destroyed.
#include <iostream>
using namespace std;

class Demo
{
public:

    Demo()
    {
        cout<<"Constructor"<<endl;
    }

    ~Demo()
    {
        cout<<"Destructor";
    }
};

int main()
{
    Demo d;
}