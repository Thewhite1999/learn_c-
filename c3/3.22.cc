#include <iostream>
#include <string>
using namespace std;

void dx(string &a)
{
    for (auto &c : a)
        c = toupper(c);
}

int main()
{
    for(auto i=text.begin();i!=text.end() && !i->empty();++i)
        *i = dx(*i);
        cout<<*i<<endl;
}