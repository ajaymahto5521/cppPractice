//Access private variable using friend function.
#include <iostream>
using namespace std;

class Test
{
private:

    int x = 100;

    friend void display(Test);
};

void display(Test t)
{
    cout<<t.x;
}

int main()
{
    Test t;

    display(t);
}