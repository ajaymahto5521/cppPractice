// Q2. Add constructor to initialize values
#include <iostream>
using namespace std;

class Car{
    string brand;
    int year;
public:
    Car(string b, int y){
        brand = b;
        year = y;
    }
    void display(){
    cout<<"Brand: "<<brand<<", Year: "<<year<<endl;
    }
};

int main(){
    Car c1("Tata", 2024);
    c1.display();
}