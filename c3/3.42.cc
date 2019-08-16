#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v{1,2,3,4,5};
    int a[10];
    for(int i = 0; i< v.size() ; i++)
    {
        a[i] = v[i];
    }
}