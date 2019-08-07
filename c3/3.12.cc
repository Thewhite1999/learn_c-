#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<vector<int> > ivec;
    vector<string> svec = ivec;
    vector<string> svec(10,"null");
    return 0;
}

//1是正确的，向量的元素是vector对象
//2是错误的，类型不同不能拷贝
//3是争取的，内容是十个“null”