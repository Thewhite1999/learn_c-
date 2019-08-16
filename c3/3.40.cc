#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    char c1[] = "hello ";
    char c2[] = "world !";
    char c3[15]; 
    strcpy(c3,c1);
    strcat(c3,c2);
    char *cp = c3;
    while(*cp)
    {
        cout << *cp ;
        ++cp;
    }
}