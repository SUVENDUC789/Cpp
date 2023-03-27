#include <iostream>
using namespace std;

class Calculate;

class Complex
{
    int real, comp;
    friend class Calculate;

public:
    Complex(int, int);
    void show();
};

class Calculate
{
public:
    static Complex add(Complex o1, Complex o2)
    {
        return Complex(o1.real + o2.real, o1.comp + o2.comp);
    }

    Complex sub(Complex o1, Complex o2)
    {
        return Complex(o1.real - o2.real, o1.comp - o2.comp);
    }
};

Complex::Complex(int x, int y)
{
    real = x;
    comp = y;
}

void Complex::show()
{
    cout << "( " << real << " + " << comp << " i )" << endl;
}

int main()
{

    Complex o(10 + 10, 20 + 5);
    Complex o1(10, 20);

    Complex addO = Calculate::add(o, o1);
    Complex subO = Calculate().sub(o, o1);

    addO.show();
    subO.show();

    return 0;
}