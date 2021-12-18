// ///////////////////////////////////////////////////////
//
// 名称: modulus.cpp 整数求模计算
// 描述: uses & operator to convert lbs to stone
// 日期: 2021-03-14 22:17:44
//
// ///////////////////////////////////////////////////////
#include <iostream>
int main(void)
{
    using namespace std;
    const int Lbs_per_stn = 14;
    int lbs;

    cout << "Enter your weight in pounds: ";
    cin >> lbs;
    //获取整数部分
    int stone = lbs / Lbs_per_stn;
    //获取余数部分
    int pounds = lbs % Lbs_per_stn;
    cout << lbs << " pounds are " << stone
         << " stone, " << pounds << " pound(s).\n";
    return 0;
}