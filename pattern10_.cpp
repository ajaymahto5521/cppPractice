/*

*********
 *******
  *****
   ***
    *
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any odd no. ";
    cin>>n;

    for(int i=0; i<=n-1; i++){
        for(int j=1; j<=i; j++){
            cout<<" ";
        }
        for(int j=1; j<=n+4-2*i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}