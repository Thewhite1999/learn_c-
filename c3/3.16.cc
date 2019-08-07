#include <iostream>
#include <vector>
#include <string>
using namespace std;

void bl(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" "<<endl;
}

void bl_1(vector<string> v)
{
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" "<<endl;
}



int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10,42);
    vector<int> v4{10};
    vector<int> v5{10,42};
    vector<string> v6{10};
    vector<string> v7{10,"hi"};
    bl(v1);
    bl(v2);
    bl(v3);
    bl(v4);
    bl(v5);
    bl_1(v6);
    bl_1(v7);
    return 0;
}