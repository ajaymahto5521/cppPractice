/*Create an Employee class with:

id
name
salary

Read values and display them.
*/
#include <iostream>
using namespace std;

class Employee
{
public:

    int id;
    string name;
    float salary;

    void input()
    {
        cin>>id>>name>>salary;
    }

    void display()
    {
        cout<<"ID : "<<id<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Salary : "<<salary<<endl;
    }
};

int main()
{
    Employee e;

    e.input();

    e.display();
}