#include <iostream>
using namespace std;

void fun(int n)
{
    try
    {
        if (n % 2 == 0)
            throw n;
    }
    catch (int x)
    {
        cout << "Exception fun() : " << x << " is even number" << endl;
        throw; // this is called rethrowing
    }
    cout << "end fun()" << endl;
}

int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    try
    {
        fun(n);
    }
    catch (int y)
    {
        cout << "Exception main() : " << y << " is even number" << endl;
    }
    cout << "end main()" << endl;
    return 0;
}