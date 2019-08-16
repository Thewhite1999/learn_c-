#include<iostream>
#include<cstddef>
using namespace std;

int main()
{
    constexpr size_t as = 10;
    int ia[as];
    for(int i =0;i<as;i++)
        ia[i] = i;
    
}