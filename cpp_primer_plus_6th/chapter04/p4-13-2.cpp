// ///////////////////////////////////////////////////////
// 名称: // 名称: instr2.cpp
// 描述: reading more than one word with getline,使用getline方法
// 日期: 2021-07-05 10:30:43
// ///////////////////////////////////////////////////////

#include <iostream>
#include <string>
int main(void)
{
    using namespace std;
    // const int ArSize = 20;
    // char name[ArSize];
    // char dessert[ArSize];
    string name;
    string dessert;

    cout << "Enter your name: ";
    // cin.getline(name, ArSize);      // reads through newline
    getline(cin, name);
    cout << "Enter your favorite dessert: ";
    // cin.getline(dessert, ArSize);
    getline(cin, dessert);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}
