#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a[] = {1,2,3,4,5,6,7};
    vector<int> v(begin(a), end(a));
}