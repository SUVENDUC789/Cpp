#include <iostream>
using namespace std;

class Point
{
    int x, y;
    static int count;

public:
    // Example of default constructor
    Point(int x = 0, int y = 0)
    {
        if (count == 3)
        {
            cout << "Maximum 3 object create" << endl;
            exit(0);
        }
        this->x = x;
        this->y = y;
        count++;
    }

    void show(void)
    {
        cout << "(" << this->x << " , " << this->y << ")" << endl;
    }
};

int Point ::count;

int main()
{

    Point p1 = Point(2, 3);
    p1.show();
    Point p2 = Point(2);
    p2.show();
    Point p3 = Point(20, 30);
    p3.show();
    Point p4 = Point(20, 30);

    return 0;
}