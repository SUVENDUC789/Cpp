#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    int i;
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{

    vector<int> v;
    int i;
    for (i = 0; i < 4; i++)
    {
        v.push_back(10);
    }

    display(v);

    return 0;
}
