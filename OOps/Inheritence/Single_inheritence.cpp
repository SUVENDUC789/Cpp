#include <iostream>
using namespace std;
class Shambhu
{
public:
    string subject;
    Shambhu() {}
    Shambhu(string subject)
    {
        this->subject = subject;
    }
    void getSubject()
    {
        cout << "Favorite subject is : " << subject << endl;
    }
};

class Debashis : public Shambhu
{
public:
    int age;
    Debashis() {}
    Debashis(string subject, int age)
    {
        this->subject = subject;
        this->age = age;
    }
    void getAge()
    {
        cout << "Age is : " << age << endl;
    }
};

class Suvendu : public Debashis
{

public:
    string hobby;
    Suvendu(string subject, string hobby, int age)
    {
        this->subject = subject;
        this->hobby = hobby;
        this->age = age;
    }
    void getHobby()
    {
        cout << "My hobby : " << hobby << " (Only Mobile Game)" << endl;
    }
};

int main()
{
    Suvendu rahul("Pure Science", "Free Fire", 20);
    rahul.getSubject();
    rahul.getHobby();
    rahul.getAge();

    return 0;
}