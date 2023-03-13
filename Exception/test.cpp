#include <iostream>
using namespace std;

int main()
{
    int i, j, k;
    try
    {
        cin >> i >> j;
        if (j == 0)
            throw "Zero division /0 error"; // explicitly call catch block
        k = i / j;
    }
    catch (const char *e)
    {
        cout << "Exception : " << e << endl;
    }
    catch (...)
    {
        cout << "Exception : " << j << endl;
    }
    cout << "end" << endl;

    return 0;
}