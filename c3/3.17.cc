#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

void dx(string &a)
{
    for (auto &c : a)
        c = toupper(c);
}

int main()
{
    vector<string> v1;
    string i;
    cin>>i;
    while(i!="0")
    {
        v1.push_back(i);
        cin>>i;
    }
    
    
    for(int j=0;j<v1.size();j++)
    {
        dx(v1[j]);
        cout<<v1[j]<<endl;
    }
        

    return 0;
}