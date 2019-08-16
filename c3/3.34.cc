#include<iostream>
using namespace std;

int main()
{
    int a[] = {1,2,3,4,5};
    int *p2 = a;
    int *p1 = &a[4];
    p1 += p2 - p1;
    cout<<*p1<<" "<<*p2<<endl;
}

//p1 += p2 - p1;的功能是将p1向后移动p2-p1个位置
//当 该成p1 += p2 + p1;时是非法的