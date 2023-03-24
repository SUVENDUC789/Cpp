#include <iostream>
using namespace std;

int len(int *a)
{
    return sizeof(*a) / sizeof(int);
}
int main()
{
    int *p = new int(40);
    cout << *p << endl;

    char *p1 = new char('B');
    cout << *p1 << endl;

    int *arr = new int[5];
    int i;
    for (i = 0; i < 3; i++)
    {
        arr[i] = 0;
        cout << arr[i] << endl;
    }

    cout << "Length is : " << len(arr) << endl;

    delete[] arr;
    // delete arr;
    for (i = 0; i < 3; i++)
    {
        // arr[i] = 0;
        cout << arr[i] << endl;
    }

    return 0;
}