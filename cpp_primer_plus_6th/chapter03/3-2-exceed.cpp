// ///////////////////////////////////////////////////////
//
// 名称: 3-2.cpp
// 描述: exceed.cpp -- 整型超限，数据溢出
// 日期: 2021-03-13 22:24:26
//
// 整型数据溢出，可以将数据最大值和最小值连接为环形
// 超过最大值为最小值，小于最小值则溢出为最大值
//
// ///////////////////////////////////////////////////////
#include <iostream>
#define ZERO 0
#include <climits>

int main(void)
{
    using namespace std;
    short sam = SHRT_MAX; //初始化变量为最大值
    unsigned short sue = sam;

    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl
         << "Add $1 to each account." << endl
         << "Now ";
    sam = sam + 1;
    // sam 数据溢出为最小值
    sue = sue + 1;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited.\nPoor Sam!" << endl;
    sam = ZERO;
    sue = ZERO;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl
         << "Take $1 from each account." << endl
         << "Now ";
    sam = sam - 1;
    sue = sue - 1;
    //sue 数据溢出为最大值
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl
         << "Lucky Sue!" << endl;
    sam = SHRT_MIN;
    //sam 为short最小值
    cout << "Sam has " << sam << " dollars now.";
    sam = SHRT_MIN - 1;
    //sam 数据溢出为最大值
    cout << "Sam has " << sam << " dollars now.";
    return 0;
}