// ///////////////////////////////////////////////////////
//
// 名称: 2-7-2.cpp
// 描述: 转换距离单位
// 日期: 2021-03-13 15:06:01
//
// ///////////////////////////////////////////////////////
#include <iostream>
int convert(int);
int main(void)
{
    using namespace std;

    cout << "Please input the distance, in ong unit: ";
    int ong;
    cin >> ong;
    cout << ong << " ong = ";
    cout << convert(ong) << " feets." << endl;
    return 0;
}
int convert(int ong)
{
    return 220 * ong;
}