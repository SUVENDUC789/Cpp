#include <iostream>
using namespace std;

class Complex;

class Calculator
{
public:
    static Complex add(Complex a, Complex b);
    static Complex sub(Complex a, Complex b);
    static Complex mul(Complex a, Complex b);
};

class Complex
{
private:
    int real, comp;

    // friend Complex Calculator ::add(Complex, Complex);
    // friend Complex Calculator ::sub(Complex, Complex);

    friend class Calculator;

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

Complex Calculator::add(Complex a, Complex b)
{
    Complex c;
    // c.setNumber((a.real + b.real), (a.comp + b.comp));
    c.real = a.real + b.real;
    c.comp = a.comp + b.comp;
    return c;
}

Complex Calculator::sub(Complex a, Complex b)
{
    Complex c;
    // c.setNumber((a.real + b.real), (a.comp + b.comp));
    c.real = a.real - b.real;
    c.comp = a.comp - b.comp;
    return c;
}

Complex Calculator::mul(Complex a, Complex b)
{
    Complex c;
    // c.setNumber((a.real + b.real), (a.comp + b.comp));
    c.real = a.real * b.real;
    c.comp = a.comp * b.comp;
    return c;
}

int main()
{
    Complex c1, c2, c;
    c1.setNumber(10, 20);
    c2.setNumber(20, 30);

    c = Calculator::add(c1, c2);
    c.getNumber();

    c = Calculator::sub(c1, c2);
    c.getNumber();

    c = Calculator::mul(c1, c2);
    c.getNumber();

    return 0;
}
