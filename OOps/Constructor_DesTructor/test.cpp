#include <iostream>
using namespace std;

class Complex
{
private:
    int real, comp;

public:
    // Default constructor
    Complex()
    {
        this->real = 0;
        this->comp = 0;
    }

    Complex(int, int); // declear parameterized constructor

    void show()
    {
        cout << "(" << this->real << " + " << this->comp << "i)" << endl;
    }
};

// define parameterized constructor
Complex ::Complex(int r, int c = 108)
{
    real = r;
    comp = c;
}

int main()
{
    Complex c1, c2(10); // Implicit call

    // Explicit call
    Complex c3 = Complex(50);
    c1.show();
    c2.show();
    c3.show();

    return 0;
}