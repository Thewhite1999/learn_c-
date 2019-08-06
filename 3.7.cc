#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "hello world!";
    for(char i=0;i<s.size();i++)
    {
        s[i] = 'X';     
    }
    cout<<s<<endl;
    return 0;
}