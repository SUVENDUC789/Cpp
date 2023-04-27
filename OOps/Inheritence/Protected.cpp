#include <iostream>
using namespace std;

/*
                            Private Visibility-Mode         Public Visibility-Mode      Protected Visibility-Mode
    1. Private Member           No                              No                          No
    2. Protected Member         Private                         Protected                   Protected
    3. Public Member            Private                         Public                      Protected
*/

class Base
{
protected:
    int b;

public:
    int a;

    Base(int a = 108, int b = 412)
    {
        this->a = a;
        this->b = b;
    }
};

class Derived : protected Base
{
public:
    int getValue1()
    {
        return b;
    }
    int getValue2()
    {
        return a;
    }
};

int main()
{
    Base b;
    Derived d;
    cout << b.a << endl;
    // cout << d.a << endl; //-->You Cannot Directly access Protected Member
    cout << d.getValue1() << endl;
    cout << d.getValue2() << endl;

    return 0;
}