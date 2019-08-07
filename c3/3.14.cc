#include <iostream>
#include <vector>
#include <string>
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
    
    for(int j=0;j<v1.size();j++)
        cout<<v1[j];
    return 0;
}