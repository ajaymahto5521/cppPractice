//Initialize variables using initialization list.
#include <iostream>
using namespace std;

class Student
{
    int age;

public:

    Student(int a):age(a)
    {
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