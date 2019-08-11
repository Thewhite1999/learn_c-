#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<unsigned> scores(11,0);
    unsigned grade;
    cin >> grade;
    while (grade) 
    {
        if (grade <= 100)
            (*(scores.begin() + grade/10))++;
        cin >> grade;
    }

    for(auto i = scores.begin(); i != scores.end(); ++i)
        cout<<*i<<endl;

}