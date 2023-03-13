#include <iostream>
using namespace std;
template <class T = int>
class Test
{
public:
    T a, b;
    void input()
    {
        cout << "Enter value of a and b : " << endl;
        cin >> a;
        cin >> b;
    }

    void output();
};

template <class T>
void Test<T>::output()
{
    cout << "Value of a : " << a << endl;
    cout << "Value of b : " << b << endl;
}

int main()
{
    Test<int> t;
    t.input();
    t.output();

    Test<string> t1;
    t1.input();
    t1.output();

    return 0;
}