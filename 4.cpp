#include<iostream>
#include<string>
#include <vector>
using namespace std;

using namespace std;
class Crud{
private:
inline static int myid=100;
    string name;
    long long ph;

  

public:
    Crud();
    ~Crud();

void Create(int id)
{
    cout<<" Enter your name: ";
    cin>>name;
    cout<<" Enter your Phone no.: ";
    cin>>ph;
    
}

void Read()
{  
    
    cout<<" Your name is: "<<name;
    cout<<" Your Phone no. is: "<<ph;
    

}
    
void Update()
{   
    
    cout<<" Enter your name: ";
    cin>>name;
    cout<<" Enter your phone no: ";
    cin>>ph;
}
    
void Delete()
{
    
}

};