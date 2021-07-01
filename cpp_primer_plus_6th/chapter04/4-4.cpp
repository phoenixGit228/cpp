// ///////////////////////////////////////////////////////
//
// 名称: instr2.cpp
// 描述: reading more than one word with getline,使用getline方法
// 日期: 2021-04-11 10:29:11
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
    cin.getline(name, ArSize);      // reads through newline
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert, ArSize);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}