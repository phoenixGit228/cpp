// ///////////////////////////////////////////////////////
//
// 名称: 3-4.CPP
// 描述: hexoct2.cpp -- display values in hex and octal
// 日期: 2021-03-13 23:14:27
//
// ///////////////////////////////////////////////////////
#include <iostream>
int main(void)
{
    using namespace std;

    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "Monsieur cuts a striking figure!\n";
    // cout << dec;
    // 控制cout以十进制显示整数
    cout << "chest = " << chest << " (decimal for 42))\n";
    cout << hex;
    // cout 以十六进制显示整数
    cout << "waist = " << waist << " (hexadecimal for 42)\n";
    cout << oct;
    // cout 以八进制显示整数
    cout << "inseam = " << inseam << " (octal for 42)\n";
    return 0;
}