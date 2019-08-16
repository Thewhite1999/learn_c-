#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s1 = "hello";
    string s2 = "hello world";
    if (s1 < s2)
        cout<<"s1 < s2"<<endl;

    const char c1[] = "hello";
    const char c2[] = "hello world";
    if (strcmp(c1, c2) < 0)
        cout<<"c1 < c2"<<endl;
    
}