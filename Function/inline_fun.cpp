#include <iostream>
using namespace std;

inline int sum(int *p, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += p[i];
    }
    return sum;
}

int main()
{
    int a[]={1, 2, 3, 4, 5};
    cout << "Sum is : " << sum(a, 5) << endl;
    return 0;
}