#include <iostream>
using namespace std;

void maximum(int *a, int *b) {
    if(*a > *b)
        cout << *a;
    else
        cout << *b;
}

int main() {
    int x = 15, y = 20;

    maximum(&x, &y);

    return 0;
}