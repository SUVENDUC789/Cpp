#include <iostream>
using namespace std;

inline int sum(int a, int b)
{
    return a + b;
}

inline int sum(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    cout << sum(2, 3) << endl;
    cout << sum(2, 3, 5) << endl;
    return 0;
}