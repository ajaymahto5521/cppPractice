//Initialize object using this pointer.
#include <iostream>
using namespace std;

class Student
{
public:

    int age;

    Student(int age)
    {
        this->age = age;
    }

    void display()
    {
        cout<<age;
    }
};

int main()
{
    Student s(22);

    s.display();
}