#include<iostream>
using namespace std;
int main(){
    int arr[4];
    cout<<"Enter 4 elements";
    for(int i=0; i<3; i++){
        cin>>arr[i];
    }
    int avg=0,sum=0;
    for(int i=0; i<3; i++){
        sum=sum+arr[i];
    }
    avg=sum/4;
    cout<<"Average is: "<<avg;
}