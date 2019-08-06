#include <iostream>
using namespace std;

int main()
{
    int i = 50;
    int sum = i;
    while(i<101)
    {
        sum += i;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}
