#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    // int *b = &a;
    int *b = NULL;
    b = &a;

    // & ----> Address Operator
    // * ----> Dereference Operator

    cout << "The value of &a : " << &a << endl;
    cout << "The value of b : " << b << endl;

    cout << "The value of a : " << a << endl;
    cout << "The value of *b : " << *b << endl;

    int **c = &b;
    cout << "The value of **c : " << **c << endl;
    cout << "The value of *c : " << *c << endl;
    cout << "The value of c : " << c << endl;

    return 0;
}