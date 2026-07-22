#include<iostream>
using namespace std;
int main(){
    int i=1, n, sum=0;
    cout<<"Enter any no. ";
    cin>>n;
   
    while(i<n){
        sum=sum+i;
        i++;
    }
    cout<<"Sum of n natural no is: "<<sum;
    return 0;
}