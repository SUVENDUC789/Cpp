// public and private access modifier

#include <iostream>
#include <string>
using namespace std;

class Students
{
private:
    int roll;
    string name;
    float cgpa;

public:
    void setData(int roll, string name, float cgpa)
    {
        this->roll = roll;
        this->name = name;
        this->cgpa = cgpa;
    }

    void getData();
};

void Students ::getData()
{
    cout << "Roll : " << roll << " Name : " << name << " Marks : " << cgpa << endl;
}

int main()
{
    // Students s1, s2, s3;

    // s1.setData(412, "Suvendu", 7.1);
    // s2.setData(444, "Debarpan", 0.0);
    // s3.setData(420, "Hritik", 6.9);

    // s1.getData();
    // s2.getData();
    // s3.getData();

    Students s[3];

    s[0].setData(412, "Suvendu", 7.1);
    s[0 + 1].setData(444, "Debarpan", 0.0);
    s[0 + 2].setData(420, "Hritik", 6.9);

    for (int i = 0; i < 3; i++)
    {
        s[i].getData();
    }

    return 0;
}
