#include <iostream>
using namespace std;

class Point
{

public:
    int x, y;
    Point() {}
    // Point(int, int);
};

class Point_suv : public Point
{
public:
    Point_suv(int xi, int yi)
    {
        x = xi;
        y = yi;
    }

    void showPoint()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }
};

int main()
{
    Point_suv ps(10, 10);
    ps.showPoint();
    cout << ps.x << endl;
    cout << ps.y << endl;

    return 0;
}