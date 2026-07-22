#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;
};

int main()
{
    Student s;

    s.name = "Ajay";
    s.age = 22;

    cout << "Name : " << s.name << endl;
    cout << "Age  : " << s.age << endl;
}