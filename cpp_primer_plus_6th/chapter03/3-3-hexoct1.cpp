// ///////////////////////////////////////////////////////
//
// 名称: 3-3.CPP
// 描述: hexoct1.cpp -- shows hex and octal literals
// 日期: 2021-03-13 23:04:27
//
// ///////////////////////////////////////////////////////
#include <iostream>
int main(void)
{
    using namespace std;

    int chest = 42;         // 十进制
    int waist = 0x42;       // 十六进制
    int inseam = 042;       // 八进制

    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << " (42 in decimal)\n";
    cout << "waist = " << waist << " (0x42 in hex)\n";
    cout << "inseam = " << inseam << " (042 in octal)\n";
    return 0;
}