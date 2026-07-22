#include<iostream>
using namespace std;
void largestNo(int a, int b, int c)
{
if(a>b && a>c)
cout<<"largest no is"<<a;

else if(b>c && b>a)
cout<<"Largest no is"<<b;

else
cout<<"Largest no is"<<c;

}
int main()
{
largestNo(10,20,40);
return 0;
}