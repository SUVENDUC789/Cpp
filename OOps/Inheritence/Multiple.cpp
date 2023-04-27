#include <iostream>
using namespace std;

class Base1
{
protected:
    int val1;

public:
    void setVal1(int val1)
    {
        this->val1 = val1;
        // cout << "Base 1 val 1 = " << val1 << endl;
    }

    int getVal1()
    {
        return val1;
    }
};

class Base2
{
protected:
    int val2;

public:
    void setVal2(int val1)
    {
        this->val2 = val1;
        // cout << "Base 1 val 1 = " << val2 << endl;
    }

    int getVal2()
    {
        return val2;
    }
};

class Derived : public Base1, public Base2
{

public:
    void show()
    {
        cout << "Base1 Val1 = " << val1 << endl;
        cout << "Base2 Val2 = " << val2 << endl;
        cout << "Final Result = " << (val1 + val2) << endl;
    }

    void show(Base1 &b1, Base2 &b2)
    {
        b1.setVal1(b1.getVal1() + 10);
        b2.setVal2(b2.getVal2() + 10);

        cout << "Base1 Val1 = " << b1.getVal1() << endl;
        cout << "Base2 Val2 = " << b2.getVal2() << endl;
        cout << "Final Result = " << (b1.getVal1() + b2.getVal2()) << endl;
    }
};

int main()
{
    Base1 b1;
    Base2 b2;
    b1.setVal1(100);
    b2.setVal2(200);
    Derived d2;
    d2.show(b1, b2);

    cout << "Base1 val1 = " << b1.getVal1() << endl;
    cout << "Base2 val2 = " << b2.getVal2() << endl;

    Derived d;
    d.setVal1(10);
    d.setVal2(20);
    d.show();

    return 0;
}