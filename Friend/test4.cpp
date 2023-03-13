#include <iostream>
using namespace std;
class sup;

class suv
{
    int roll;

public:
    void setRoll(int roll)
    {
        this->roll = roll;
    }

    void getRoll()
    {
        cout << "Roll (Suvendu) : " << this->roll << endl;
    }

    friend void swap(suv &a, sup &b);
};

class sup
{
    int roll;

public:
    void setRoll(int roll)
    {
        this->roll = roll;
    }

    void getRoll()
    {
        cout << "Roll (Supratim) : " << this->roll << endl;
    }
    friend void swap(suv &a, sup &b);
};

void swap(suv &a, sup &b)
{
    int temp = a.roll;
    a.roll = b.roll;
    b.roll = temp;
}

int main()
{
    cout << "Before swaping :" << endl;
    suv a;
    a.setRoll(412);
    a.getRoll();

    sup b;
    b.setRoll(411);
    b.getRoll();
    cout << "After swaping :" << endl;
    swap(a, b);

    a.getRoll();
    b.getRoll();
    return 0;
}