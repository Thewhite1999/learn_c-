#include <iostream>
using namespace std;

int main()
{
    int i,j,max,min;
    cout<<"请输入两个整数："<<endl;
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
    cout<<"这两个整数之间的整数有:"<<endl;
    for(int k=min;k<=max;k++)
    {
        cout<<k<<endl;
    }
    return 0;
}