/*
Class -> Object
Templates -> class
    |
Parametrized clas
used fro maintain dry principle
*/

#include <iostream>
using namespace std;
template <class T>

class Demo
{
public:
    T data;

    void show()
    {
        cout << this->data << endl;
    }
};

int main()
{
    Demo<int> a;
    a.data = 412;
    a.show();

    Demo<float> b;
    b.data = 7.1;
    b.show();

    Demo<string> c;
    c.data = "Suvendu Chowdhury";
    c.show();

    Demo<char> d;
    d.data = 'A';
    d.show();

    return 0;
}