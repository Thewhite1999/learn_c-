#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v{12,13,2,6,8,25,333,256,113,245};
    for(auto i=v.begin();i!=v.end();++i)
    {
        *i = 2*(*i);
        cout<<*i<<endl;
    }    
}