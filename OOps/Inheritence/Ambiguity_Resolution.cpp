#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "Hello World" << endl;
    }
};

class Base2 
{
public:
    void greet()
    {
        // Base1::greet();
        cout << "How are you ?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int roll;

public:
    void greet()
    {
        Base2::greet();
    }
};

int main()
{
    Derived d;
    d.greet();
    return 0;
}