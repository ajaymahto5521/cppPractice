#include<iostream>
using namespace std;

class Student
{
    public:
        string name;
        int age;

    void display(){
    cout<<"Name is: "<<name<<endl<<"Age is: "<<age;
    }

};


int main(){

    Student s1;
    s1.name = "Ajay";
    s1.age = 25;

    s1.display();
}