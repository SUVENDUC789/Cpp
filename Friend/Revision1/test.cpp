#include <iostream>
using namespace std;
/*
Properties of of friend function
1. Not in the scope of the class (friend function not a memeber function in the class)
2. also acess static memeber in class
*/
class Point
{
private:
    /*
    -friend function not a memeber function in a class
    */
    friend int main(); // main function also a friend function
    int x, y;
    static int i;

public:
    Point(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }
    // Point() {}
    void show()
    {
        cout << "(" << x << " , " << y << ")" << endl;
    }

    static void showP(Point p)
    {
        i++;
        cout << i << ") Point" << endl;
        p.show();
    }
    friend void add(Point p1, Point p2)
    {
        Point p = Point(p1.x + p2.x, p1.y + p2.y); // Acess class private data memeber, Public constructor
        // p.show();                                  // And also access Public memeber
        showP(p); // And also access static memeber function
    }
};

int Point ::i = 0;

int main() // friend function acess private memeber in our class
{
    Point o;
    o.x = 20;
    o.y = 30;

    // o.show();
    Point::showP(o);

    Point b = Point(10, 10);

    // b.show();

    Point ::showP(b);
    add(o, b);

    return 0;
}