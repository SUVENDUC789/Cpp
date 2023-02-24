#include <iostream>
#include <string>
using namespace std;

class Students
{
private:
    int roll;
    string name;
    float marks;
    static string cn;

public:
    //  default constructor(Initialized Object)
    Students(int roll = 0, string name = "", float marks = 0.0)
    {
        this->roll = roll;
        this->name = name;
        this->marks = marks;
    }

    // Implementation present outside the class
    void getData();

    // Destructor
    ~Students()
    {
        cout << "call Destructor ..." << endl;
    }
};

void Students::getData()
{
    cout << "Roll : " << roll << " Name : " << name << " Marks : " << marks << " College : " << Students::cn << endl;
}

string Students::cn = "Maharaja Manindra Chandra College";

int main()
{
    cout << "Enter this block " << endl;
    {
        Students s[3];

        s[0] = Students(412, "Suvendu", 7.1);
        s[1] = Students(420, "Hritik", 6.9);
        s[2] = Students(444, "Debarpan", 7.3);

        for (int i = 0; i < 3; i++)
        {
            s[i].getData();
        }
    }
    cout << "Exit this block" << endl;

    return 0;
}