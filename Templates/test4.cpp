// Function Templates & Function Templates with Parameters

#include <iostream>
using namespace std;

template <class T>

void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10;
    int y = 20;
    cout << x << " " << y << endl;
    swapp(x, y);
    cout << x << " " << y << endl;

    string x1 = "Suv";
    string y1 = "Sup";
    cout << x1 << " " << y1 << endl;
    swapp(x1, y1);
    cout << x1 << " " << y1 << endl;

    return 0;
}