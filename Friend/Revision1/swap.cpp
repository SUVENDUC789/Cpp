#include <iostream>
using namespace std;

class Supratim; // Forword declaration
class Suvendu
{
    int roll;

public:
    void setRoll(int roll)
    {
        this->roll = roll;
    }
    int getRoll()
    {
        return roll;
    }
    friend void swap(Suvendu &, Supratim &);
};

class Supratim
{
    int roll;

public:
    void setRoll(int roll)
    {
        this->roll = roll;
    }
    int getRoll()
    {
        return roll;
    }
    friend void swap(Suvendu &, Supratim &);
};

inline void swap(Suvendu &suv, Supratim &sup)
{
    int temproll = suv.roll;
    suv.roll = sup.roll;
    sup.roll = temproll;
}

int main()
{
    Suvendu suv;
    Supratim sup;

    suv.setRoll(412);
    sup.setRoll(411);

    cout << "Before swapping : " << endl;
    cout << "Suvendu Roll : " << suv.getRoll() << endl;
    cout << "Supratim Roll : " << sup.getRoll() << endl;

    swap(suv, sup);

    cout << "After swapping : " << endl;
    cout << "Suvendu Roll : " << suv.getRoll() << endl;
    cout << "Supratim Roll : " << sup.getRoll() << endl;

    return 0;
}