/*
---------- Member friend function C++ --------------
class Complex;//This is a Forword Declaration
class Calculate{
    //declear function
    add();
};

class Complex{
    friend Calculate::add();//declear add memeber function is a friend function
};

Calculate::add(){
    //Function defination
}
*/
#include <iostream>
using namespace std;

class Complex;

class Calculate
{
public:
    static Complex add(Complex, Complex);
};

class Complex
{
    int real, comp;
    friend Complex Calculate::add(Complex, Complex);

public:
    Complex(int real, int comp)
    {
        this->real = real;
        this->comp = comp;
    }

    void show()
    {
        cout << "( " << real << " + " << comp << " i )" << endl;
    }
};

Complex Calculate::add(Complex o1, Complex o2)
{
    return Complex(o1.real + o2.real, o1.comp + o2.comp);
}

int main()
{
    Complex o1(10, 20);
    Complex o2(10, 20);

    Complex f = Calculate::add(o1, o2);
    f.show();

    return 0;
}
