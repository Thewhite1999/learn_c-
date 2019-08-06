#include<iostream>
#include<string>
using namespace std;

int main()
{
    unsigned n;
    cin>>n;
    string s;
    // for(int i=0;i<n;i++)
    // {
    //     string s1;
    //     cin>>s1;
    //     s += s1;
    // }
    // cout<<s<<endl;

    for(int i=0;i<n;i++)
    {
        string s1;
        cin>>s1;
        s = s + s1 + " ";
    }
    cout<<s<<endl;

    return 0;

}