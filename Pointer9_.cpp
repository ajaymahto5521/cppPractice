/* Pointer Arithmetic */
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10,20,30,40};

    int *ptr = arr;

    for(int i=0;i<4;i++)
    {
        cout << "Address: " << (ptr+i)
             << " Value: " << *(ptr+i)
             << endl;
    }

    return 0;
}