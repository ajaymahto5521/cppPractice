#include <iostream>
using namespace std;
int main() {
//swap without using temporary variable variable
int a=2,b=3;
cout<<" Before swapping a = "<< a <<" , b = "<< b<< endl;
b=b+a;
a=b-a;
b=b-a;
cout<<"after swapping a ="<< a <<" , b = "<< b <<endl;



  
    return 0;
}