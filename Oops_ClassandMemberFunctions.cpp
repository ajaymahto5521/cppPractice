//Create a class Rectangle with length and width. Create a function to calculate area.

#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int width;

    int area()
    {
        return length * width;
    }
};

int main()
{
    Rectangle r;

    r.length = 10;
    r.width = 5;

    cout << "Area = " << r.area();
}