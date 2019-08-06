#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(s1>s2)
    cout<<s1<<endl;
    else if(s1<s2)
    cout<<s2<<endl;
    else
    cout<<"这两个字符串相等"<<endl;

    if(s1.size()>s2.size())
    cout<<s1<<endl;
    else if(s1.size()<s2.size())
    cout<<s2<<endl;
    else
    cout<<"这两个字符串长度相等"<<endl;
    
    return 0;
}