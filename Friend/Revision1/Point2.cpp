#include <iostream>
using namespace std;
class Point;
class Calculate
{
public:
    static Point add(Point, Point);
    static Point add(Point, Point, Point);
};

class Point
{
    int x, y;
    // friend Point Calculate::add(Point, Point);
    friend Point Calculate::add(Point, Point);
    friend Point Calculate::add(Point, Point, Point);

public:
    Point(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }
    void show();
};

void Point::show()
{
    cout << "(" << x << "," << y << ")" << endl;
}

Point Calculate::add(Point p1, Point p2)
{
    Point p = Point(p1.x + p2.x, p1.y + p2.y);
    // p.show();
    return p;
}
Point Calculate::add(Point p1, Point p2, Point p3)
{
    Point p = Point(p1.x + p2.x + p3.x, p1.y + p2.y + p3.y);
    // p.show();
    return p;
}

int main()
{
    Point p = Point(10, 10);
    p.show();

    Point p2 = Point(1, 1);
    p2.show();

    Point p3 = Calculate::add(p, p2);
    p3.show();

    return 0;
}