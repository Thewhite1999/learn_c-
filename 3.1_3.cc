#include <iostream>
using namespace std;

int main()
{
    int i,j,max,min;
    cout<<"����������������"<<endl;
    cin>>i>>j;
    if(i>j)
    {
        max = i;
        min = j;
    }
    else
    {
        max = j;
        min = i;
    }
    cout<<"����������֮���������:"<<endl;
    for(int k=min;k<=max;k++)
    {
        cout<<k<<endl;
    }
    return 0;
}