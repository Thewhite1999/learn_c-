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

    // for(int j=0;j<v1.size()-1;j++)
    // {
    //     cout<<v1[j]+v1[j+1]<<" "<<endl;
    // }

    for(int j=0;j<(v1.size()+1)/2;j++)
    {
        cout<<v1[j]+v1[v1.size()-j-1]<<" "<<endl;
    }

    
    return 0;
}