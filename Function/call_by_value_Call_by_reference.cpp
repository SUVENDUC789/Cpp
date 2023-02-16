#include <iostream>
using namespace std;

// call by value
void swapcallByValue(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

void swapcallByUsingReferenceVariable(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

// swap with out using third variable
// call by reference
void swapcallByReference(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main()
{
    int a = 10, b = 20;
    cout << "a = " << a << " b = " << b << "    ( Before swaping )" << endl;
    swapcallByUsingReferenceVariable(a, b);
    // swapcallByReference(&a, &b);
    // swapcallByValue(a, b);
    cout << "a = " << a << " b = " << b << "    ( After swaping )" << endl;

    return 0;
}