#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "hello world!";
    int i =0;
    while(s[i])
    {
        s[i] = 'X';
        i++;
    }
    cout<<s<<endl;
    return 0;
}