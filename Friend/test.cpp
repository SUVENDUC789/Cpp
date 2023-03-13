/*
    1) Not in the scope in the class
*/

#include <iostream>
using namespace std;

class Complex
{
private:
    int real, comp;

    // Friend function declaration
    friend Complex sumOfTwoNumber(Complex a, Complex b);

public:
    void setNumber(int real, int comp)
    {
        this->real = real;
        this->comp = comp;
    }

    void getNumber()
    {
        cout << "(" << this->real << " + " << this->comp << "i)" << endl;
    }
};
/*
    - Frined function also access private member in the class and object.
*/
Complex sumOfTwoNumber(Complex a, Complex b)
{
    // all private memeber access easily
    Complex c;
    // c.setNumber((a.real + b.real), (a.comp + b.comp));
    c.real = a.real + b.real;
    c.comp = a.comp + b.comp;
    return c;
}

int main()
{
    Complex c, d, e;
    c.setNumber(10, 20);
    d.setNumber(1, 2);
    c.getNumber();
    d.getNumber();

    e = sumOfTwoNumber(c, d);
    e.getNumber();

    return 0;
}