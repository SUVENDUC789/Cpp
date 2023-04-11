/*
Note: 
1. default visibility mode private.
2. in private visibility mode all derived public memeber are private in our derived class
3. in public visibility mode all derived public memeber are public in our derived class
*/
#include <iostream>
using namespace std;
// Base class 
class Employee
{

public:
    int id;
    double salary;
    Employee() {}
    Employee(int id)
    {
        this->id = id;
        salary = 15000;
    }
};

// Inheritence Syntax 
/*
class {{Derived}} : {{visibility-mode}} {{Base-class}}{
    //code ...
};*/

// Default visibility Mode is Private
// Derived class 
class Programmer : Employee
{

public:
    int lang;
    Programmer(int pid)
    {
        id = pid;
        lang = 108;
    }
};

int main()
{

    Programmer p(10);
    // cout << p.id << endl;
    cout << p.lang << endl;
    // cout << p.salary << endl;

    return 0;
}