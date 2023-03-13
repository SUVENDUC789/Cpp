// Class Templates with Default Parameters

#include <iostream>
using namespace std;

template <class T1 = int, class T2 = int>

class Dumy
{
    T1 x;
    T2 y;

public:
    Dumy(T1 x, T2 y)
    {
        this->x = x;
        this->y = y;
    }

    void point()
    {
        cout << "(" << this->x << "," << this->y << ")" << endl;
    }
};

int main()
{
    Dumy<> d(10, 20);
    d.point();

    Dumy<int, string> d1(412, "Suvendu");
    d1.point();
    

    return 0;
}