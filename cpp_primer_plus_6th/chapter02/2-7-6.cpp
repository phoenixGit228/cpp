// ///////////////////////////////////////////////////////
//
// 名称: 2-7-6.cpp
// 描述: 输入光年值，返回对应天文单位
// 日期: 2021-03-13 16:00:19
//
// ///////////////////////////////////////////////////////
#include <iostream>
double lightyear(double);
int main(void)
{
    using namespace std;
    cout << "Enter the number of light years: ";
    double ly(0);
    cin >> ly;
    cout << ly << " light years = "
         << lightyear(ly) << " astronomical units." << endl;
    return 0;
}
double lightyear(double ly)
{
    return ly * 63240;
}