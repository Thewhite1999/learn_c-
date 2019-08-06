#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(!ispunct(s[i]))
        cout<<s[i]<<endl;
    }
    return 0;
}