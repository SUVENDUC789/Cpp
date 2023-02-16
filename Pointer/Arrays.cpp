#include <iostream>
using namespace std;
/* used pointer arithmetic */
void pointerArithmetic(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << *p << " " << p << endl;
        p++;
    }
}

int main()
{
    int a[] = {9, 6, 7, 4, 2};
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " " << &a[i] << endl;
    }
    cout << "Used Pointer arithmetic Operator : " << endl;
    pointerArithmetic(a, 5);

    return 0;
}