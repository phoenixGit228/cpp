// ///////////////////////////////////////////////////////
//
// 名称: instr1.cpp
// 描述: reading more than one string, 程序存在一个致命bug，如果存在空格，则无机会输入第二个参数
// 日期: 2021-04-11 10:20:44
//
// ///////////////////////////////////////////////////////
#include <iostream>
int main(void)
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin >> name;
    cout << "Enter your favorite dessert:\n";
    cin >> dessert;
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}