// Q1. Create a simple class and object
#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int age;
    void display(){
        cout<<"Name: "<<name<<", Age: "<<age;
    }
};
int main(){
    Student s1;
    s1.name="Ajay";
    s1.age=24;
    s1.display();
}