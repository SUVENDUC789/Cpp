#include <iostream>
using namespace std;

// using const keyword 
int strlenMy(const char *a)
{
    int len = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        len += 1;
    }
    return len;
}

int main()
{
    cout<<strlenMy("rahul")<<endl;
    return 0;
}