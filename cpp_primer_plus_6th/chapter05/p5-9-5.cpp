// ///////////////////////////////////////////////////////
// 名称: p5-9-5.cpp
// 描述: 计算一年各月销售量总和
// 日期: 2021-12-24 23:41:22
// ///////////////////////////////////////////////////////
#include <iostream>
// #include <string>
int main(void)
{
    using namespace std;
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int sales[12]{};
    for (int i = 0; i < 12; i++)
    {
        cout << "Plese input sales of " << *months << ": ";
        cin >> sales[i];
        months++;
    }

    int total_sale = 0;
    for (int i = 0; i < 12; i++)
        total_sale += sales[i];
    cout << "Total sales of the year is " << total_sale << endl;
    return 0;
}
