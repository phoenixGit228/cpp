// ///////////////////////////////////////////////////////
//
// 名称: typecast.cpp
// 描述: forcing type changes
// 日期: 2021-03-15 12:24:47
//
// ///////////////////////////////////////////////////////
#include <iostream>
int main(void)
{
    using namespace std;
    int auks, bats, coots;

    //两数相加(double)，然后转为int
    auks = 19.99 + 11.99;

    //下列语句两数以整数相加
    // 旧的C语言风格
    bats = (int)19.99 + (int)11.99;
    // C++语言风格
    coots = int(19.99) + int(11.99);
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << coots << endl;

    char ch = 'Z';
    cout << "The code for " << ch << " is ";        //以字符格式打印
    cout << int(ch) << endl;                        //以整数格式打印
    cout << "Yes, the code is ";
    cout << static_cast<int>(ch) << endl;           //使用static_cast
    return 0;
}