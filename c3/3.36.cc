#include <iostream>
using namespace std;

int main()
{
    int a1[] = {1,2,3,4,5,6,7};
    int a2[] = {1,2,3,4,5,6};
    if((end(a1)-begin(a1)) == (end(a2)-begin(a2)))
    {
        int a = 0;
        for(int i =0; i<end(a1)-begin(a1); i++)
        {
            if(a1[i] != a2[i])
            {
                a = 1;
            }
        }

        if(a == 0)
        {
            cout<<"���������"<<endl;
        }
        else
        {
            cout<<"�����鲻��"<<endl;
        }
    } 

    else
    {
        cout<<"�����鲻��"<<endl;
    }
    
}