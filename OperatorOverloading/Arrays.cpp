#include <iostream>
#include <string>
using namespace std;

template <class DT = int>
class Array
{
    DT *a;
    int size;

public:
    Array(int size)
    {
        this->size = size;
        this->a = new DT[size];
        int i = 0;
        for (; i < size; i++)
        {
            this->a[i] = 0;
        }
    }

    Array(int *a, int size)
    {
        this->size = size;
        this->a = new DT[size];

        int i = 0;
        for (; i < size; i++)
        {
            this->a[i] = a[i];
        }
    }

    void show()
    {
        int i = 0;
        cout << "[";
        for (; i < this->size; i++)
        {
            cout << a[i] << " , ";
        }
        cout << "]" << endl;
    }

    // void operator=(Array ob)
    // {
    //     this->size = ob.size;
    //     this->a = new int[this->size];
    //     int i = 0;
    //     for (; i < this->size; i++)
    //     {
    //         this->a[i] = ob.a[i];
    //     }
    // }

    Array operator+(Array ob)
    {
        int n1 = this->size;
        int n2 = ob.size;

        int n = n1 + n2;
        DT *arr2 = new DT[n];
        int i = 0;
        for (; i < n1; i++)
        {
            arr2[i] = this->a[i];
        }
        int j = n1;
        i = 0;
        for (; j < n; j++)
        {
            arr2[j] = ob.a[i++];
        }
        return Array(arr2, n);
    }

    bool operator==(Array ob)
    {
        if (this->size == ob.size)
        {
            int i = 0;
            for (; i < ob.size; i++)
            {
                if (this->a[i] != ob.a[i])
                {
                    return false;
                }
            }
            return true;
        }
        return false;
    }
    bool operator!=(Array ob)
    {
        if (this->size == ob.size)
        {
            int i = 0;
            for (; i < ob.size; i++)
            {
                if (this->a[i] != ob.a[i])
                {
                    return true;
                }
            }
            return false;
        }
        return true;
    }

    int length()
    {
        return this->size;
    }

    // friend int len(Array o);
};

int main()
{
    // int a[] = {1, 2};
    // Array<int> ob(a, sizeof(a) / sizeof(float));
    // ob.show();

    // Array<int> B = ob;
    // ob.show();

    // Array<int> C = B + ob;
    // C.show();

    

    return 0;
}