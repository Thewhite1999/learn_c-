#include <iostream>
#include <vector>
#include <string>
using namespace std;

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
        cout<<v1[j]<<" "<<endl;
    return 0;
}