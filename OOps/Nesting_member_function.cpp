#include <iostream>
#include <string>
using namespace std;

class Binary
{
private:
    string s;
    // Private member function
    int check_bin(void)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) != '0' && s.at(i) != '1')
            {
                return 1;
            }
        }
        return 0;
    }

public:
    void readBinary(void)
    {
        cout << "Enter number : ";
        cin >> s;
    }
    string onesComplement(void)
    {
        if (check_bin() == 0) // call private function
        {
            for (int i = 0; i < s.length(); i++)
            {
                if (s.at(i) == '0')
                {
                    s.at(i) = '1';
                }
                else
                {
                    s.at(i) = '0';
                }
            }
        }
        else
        {
            cout << "This is not a binary number " << endl;
        }
        return s;
    }
    void showBinary(void)
    {
        if (check_bin() == 0) // call private function
            cout << "Binary : " << s << endl;
    }
};

int main()
{
    Binary b;
    b.readBinary();
    // b.check_bin();//--->This is Private member function
    b.onesComplement();
    b.showBinary();

    return 0;
}