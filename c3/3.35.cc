#include <iostream>
using namespace std;

int main()
{
    int a[] = {1,2,3,4,5,6,7};
    int *beg = begin(a);
    int *last = end(a);
    for(int *p = beg; p != last; p++)
    {
        *p = 0;
    }

}