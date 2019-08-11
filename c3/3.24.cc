#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    vector<int> v1;
    int i;
    cin>>i;
    while(i)
    {
        v1.push_back(i);
        cin>>i;
    }

    // for(auto j=v1.begin();j!=v1.end()-1;++j)
    // {
    //     cout<<*j+*(j+1)<<" "<<endl;
    // }

    int n = 1;
    for(auto j=v1.begin();j!=(v1.begin() + (v1.size()+1)/2);++j)
    {
        cout<<*j +*(v1.end()-n)<<" "<<endl;
        n++;
    }

    
    return 0;
}