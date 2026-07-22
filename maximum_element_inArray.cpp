#include<iostream>
using namespace std;
int main(){
    int arr[5];

    cout<<"Enter 5 elements: ";
    for(int i=0; i<4; i++){
        cin>>arr[i];
    }
    int max= arr[0];
    for(int i=0; i<4;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Maximum is: "<<max;
    return 0;
}