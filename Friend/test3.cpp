#include <iostream>
using namespace std;
class Y;

class X
{
    int num;

public:
    void setData(int num)
    {
        this->num = num;
    }
    friend void add(X x, Y y);
};

class Y
{
    int num;

public:
    void setData(int num)
    {
        this->num = num;
    }
    friend void add(X x, Y y);
};

void add(X x, Y y)
{
    cout << "Private Number is : " << (x.num + y.num) << endl;
}

int main()
{
    X x1;
    x1.setData(10);
    Y y1;
    y1.setData(20);
    add(x1, y1);
    return 0;
}