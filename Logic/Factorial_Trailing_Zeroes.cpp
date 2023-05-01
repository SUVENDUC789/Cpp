#include <iostream>
using namespace std;

int last_Zero_Fact(int n)
{
    int sum = 0;
    while (n >= 5)
    {
        n = n / 5;
        sum += n;
    }
    return sum;
}
int main()
{
    int n = 3;
    n = last_Zero_Fact(n);
    cout << n;
    return 0;
}

// 100
// 20
// 4