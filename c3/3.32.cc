#include<iostream>
#include<cstddef>
#include<vector>
using namespace std;

int main()
{
    // constexpr size_t as = 10;
    // int ia[as];
    // for(int i =0;i<as;i++)
    //     ia[i] = i;
    
    // int ia_2[as];
    // for(int j =0;j<as;j++)
    //     ia_2[j] = ia[j];

    vector<int> v(10);
    for(int i =0;i<v.size();i++)
        v[i] = i;

    vector<int> v1(v);
    
}