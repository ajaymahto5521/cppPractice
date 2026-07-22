//Create a constructor that initializes name and age.
#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    Student(string n, int a)
    {
        name = n;
        age = a;
    }

    void display()
    {
        cout << name << " " << age;
    }
};

int main()
{
    Student s("Ajay",22);

    s.display();
}