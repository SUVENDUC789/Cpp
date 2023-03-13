// Templates with Multiple Parameters
#include <iostream>
using namespace std;

template <class Object1, class Object2, class Object3>

class Details
{
private:
    Object1 d1;
    Object2 d2;
    Object3 d3;

public:
    Details(Object1 o1, Object2 o2, Object3 o3)
    {
        this->d1 = o1;
        this->d2 = o2;
        this->d3 = o3;
    }

    void show()
    {
        cout << d1 << " " << d2 << " " << d3 << endl;
    }
};

int main()
{
    Details<int, string, float> s1(412, "Suvendu", 7.1);
    Details<string, int, float> s2("Debarpan", 440, 7.3);
    Details<int, float, string> s3(420, 6.9, "Hritik");

    s1.show();
    s2.show();
    s3.show();
    return 0;
}