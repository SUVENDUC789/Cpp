// Member Function Templates & Overloading Template Functions

#include <iostream>
using namespace std;

template <class T>
class Dump
{
public:
    T d;
    void show();
};

template <class T>
void Dump<T>::show()
{
    cout << "The value of : " << d << endl;
}

void fun(int n)
{
    cout << "i am fun(int n) : " << n << endl;
}

template <class T>
void fun(T n)
{
    cout << "i am fun(T n) : " << n << endl;
}

int main()
{
    int a = 10;
    fun(a);

    string b = "Suvu";
    fun(b);
    return 0;
}