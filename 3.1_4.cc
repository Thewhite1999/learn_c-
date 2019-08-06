#include <iostream>
#include <string>
using namespace std;

struct Sales_date{
    string bookNO;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    Sales_date data1,data2,data3,data4;
    double price = 0;
    cin>>data1.bookNO>>data1.units_sold>>price;
    data1.revenue = data1.units_sold * price;
    cin>>data2.bookNO>>data2.units_sold>>price;
    data2.revenue = data2.units_sold * price;
    if (data1.bookNO == data2.bookNO)
    {
        unsigned totalCnt = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue + data2.revenue;
        cout<<data1.bookNO<<" "<<totalCnt<<" "<<totalRevenue<<" ";
        if(totalCnt != 0)
        cout<<totalRevenue/totalCnt<<endl;
        else
        cout<<"(no sales)"<<endl;
        return 0;
    }
    else
    {
        cerr<<"Data must refer to the same ISBN"<<endl;
        return -1;
    }
    
}