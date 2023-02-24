#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    float marks;

    // Static variable
    static string cn;

public:
    void setData(int id, string name, float marks)
    {
        this->id = id;
        this->name = name;
        this->marks = marks;
    }

    int getId()
    {
        return this->id;
    }
    string getName()
    {
        return this->name;
    }
    float getMarks()
    {
        return this->marks;
    }

    // static method
    static string getCn()
    {
        return cn;
    }
};

string Employee ::cn = "Chowdhury Industry";

int main()
{

    Employee e[3];

    e[0].setData(412, "Suvendu", 7.1);
    e[1].setData(411, "Supratim", 6.1);
    e[2].setData(416, "Bristi", 0.0);

    for (int i = 0; i < 3; i++)
    {
        cout << "Id : " << e[0].getId() << " Name : " << e[0].getName() << " Marks : " << e[0].getMarks() << " Company Name : " << Employee ::getCn() << endl;
    }

    return 0;
}