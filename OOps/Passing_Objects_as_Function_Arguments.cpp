#include <iostream>
#include <string>
using namespace std;

class Complex
{
private:
    int real, comp;

public:
    void setData(int real, int comp)
    {
        this->real = real;
        this->comp = comp;
    }

    // passing ojecta as a function argument
    void add(Complex obj1, Complex obj2)
    {
        this->real = obj2.real + obj1.real;
        this->comp = obj2.comp + obj1.comp;
    }

    void show()
    {
        cout << "(" << this->real << " + " << this->comp << "i)" << endl;
    }
};

int main()
{

    Complex c1, c2, c3;

    // set
    c1.setData(10, 20);
    c2.setData(10, 20);

    // add
    c3.add(c1, c2);

    c1.show();
    c2.show();
    c3.show();

    return 0;
}