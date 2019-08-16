#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const char ca[] = {'h','e','l','l','o'};
    const char *cp = ca;
    while(*cp)
    {
        cout<< *cp << endl;
        ++cp;
    }
}

//输出了hello 但后面乱码了 因为没有结束字符