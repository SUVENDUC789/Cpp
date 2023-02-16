#include <iostream>
using namespace std;

// function proto type
int factorial(int);
int main()
{
    cout << 5 << " ! = " << factorial(5) << endl; // Actual Parameter

    return 0;
}
int factorial(int n) // Formal Parameter
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}