#include <iostream>
using namespace std;

// Example default argument 
int factorial(int n = 5)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    cout << factorial() << endl;
    return 0;
}