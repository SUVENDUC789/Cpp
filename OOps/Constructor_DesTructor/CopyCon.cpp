#include <iostream>
using namespace std;
class Test
{
    int n;
    static int c;

public:
    // Default constructor
    Test() { n = 0; }

    // Parameterize constructor
    Test(int n)
    {
        this->n = n;
    }

    // Copy costructor
    Test(Test &t)
    {
        cout << "Call copy con" << endl;
        this->n = t.n;
    }

    void show()
    {
        c++;
        cout << c << ") Value is : " << n << endl;
    }
};

int Test ::c = 0;

int main()
{
    Test t1, t2(10), t3(t2); // Call copy costructor
    Test t4;
    // Dont call copy costructor
    t4 = t2;

    Test t5 = t2; // Call copy constructor
    t1.show(), t2.show(), t3.show();
    t4.show();
    t5.show();

    return 0;
}
