#include <iostream>
using namespace std;
class Y; // Forword declaration
class X
{
    int n;

public:
    void setNumber(int n)
    {
        this->n = n;
    }
    friend int add(X, Y);
};

class Y
{
    int n;

public:
    void setNumber(int n)
    {
        this->n = n;
    }
    friend int add(X, Y);
};

int add(X o, Y ob)
{
    int res = o.n + ob.n;
    return res;
}

int main()
{
    X o;
    Y ob;

    o.setNumber(10);
    ob.setNumber(20);
    cout << "Result is : " << add(o, ob) << endl;
    return 0;
}