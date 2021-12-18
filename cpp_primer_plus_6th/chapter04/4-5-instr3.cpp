// ///////////////////////////////////////////////////////
//
// 名称: instr3.cpp
// 描述: reading more than one word with get() & get()
// 日期: 2021-04-11 10:37:17
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
    cin.get(name, ArSize).get();    // reads through newline
    // 等同于以下代码
    // cin.get(name, ArSize);       // 读取输入字符
    // cin.get()                    //读取末尾的回车符
    cout << "Enter your favorite dessert:\n";
    cin.get(dessert, ArSize).get();
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}