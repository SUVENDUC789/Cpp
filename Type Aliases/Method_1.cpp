#include <iostream>
using namespace std;

class MMCC
{
    friend int main();
    string clgName()
    {
        return "Maharaja Manindra Chandra College";
    }
};

int main()
{
    typedef int Decimal;
    typedef double Ropee;
    typedef string Sentence;
    typedef char Letter;
    typedef MMCC Students;

    Decimal a = 412; // Decimal is synonym for int.
    Ropee salary = 18000.00;
    Sentence name = "Suvendu Chodhury";
    Letter character = 'S';
    Students suv;

    cout << a << endl;
    cout << salary << endl;
    cout << name << endl;
    cout << character << endl;
    cout << suv.clgName() << endl;

    return 0;
}