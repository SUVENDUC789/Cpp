#include <iostream>
#include <stdlib.h>
using namespace std;
class Complex
{
private:
    int real, comp;
    float r, c;

public:
    Complex(int real = 0, int comp = 0)
    {
        this->real = real;
        this->comp = comp;
    }

    Complex(float real, float comp)
    {
        this->r = real;
        this->c = comp;
    }

    // void setReal(int real)
    // {
    //     this->real = real;
    // }

    int getReal()
    {
        return this->real;
    }

    // void setComp(int comp)
    // {
    //     this->comp = comp;
    // }

    int getComp()
    {
        return this->comp;
    }

    void show()
    {
        cout << "(" << this->real << " + " << this->comp << "i)" << endl;
    }

    void operator++(int a)
    {
        this->real++;
        this->comp++;
    }

    void operator++()
    {
        this->real++;
        this->comp++;
    }

    void operator--();

    void operator--(int a)
    {
        this->real--;
        this->comp--;
    }

    Complex operator-(Complex b)
    {
        int real = this->getReal() - b.getReal();
        int comp = this->comp - b.comp;
        return Complex(real, comp);
    }

    Complex operator/(Complex b)
    {
        int r = this->real / b.real;
        int c = this->comp / b.comp;

        return Complex(r, c);
    }

    Complex operator*(Complex b)
    {
        int real = this->getReal() * b.getReal();
        int comp = this->comp * b.comp;
        return Complex(real, comp);
    }

    // Inline
    Complex operator+(Complex b)
    {
        int real = this->getReal() + b.getReal();
        int comp = this->getComp() + b.getComp();
        return Complex(real, comp);
    }

    void operator=(Complex a)
    {
        this->real = a.real;
        this->comp = a.comp;
    }

    bool operator==(Complex b)
    {
        if (this->real == b.real && this->comp == b.comp)
            return true;
        return false;
    }

    bool operator!=(Complex b)
    {
        if (this->real == b.real && this->comp == b.comp)
            return false;
        return true;
    }

    void *operator new[](size_t n)
    {
        void *ob;
        ob = malloc(n);
        return ob;
    }

    void operator delete[](void *p)
    {
        free(p);
    }

    // void *operator new(size_t o)
    // {
    //     void *p;
    //     p = malloc(o);
    //     return p;
    // }

    // int *p=new int(10);

    // operator delete[]
    // operator delete
    // operator new[]
    // operator new
    // operator<<
    // operator>>
};

inline void Complex::operator--()
{
    this->real--;
    this->comp--;
}

int main()
{
    Complex b(10, 20);

    return 0;
}