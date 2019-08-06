#include <iostream>
#include <stdio.h>
#include <string>
#include <typeinfo>
using namespace std;

int main()
{
    const string s = "Keep out!";
    for (auto &c : s)
    {
        printf("%s\n",typeid(c).name());
    }
    
    return 0;
}