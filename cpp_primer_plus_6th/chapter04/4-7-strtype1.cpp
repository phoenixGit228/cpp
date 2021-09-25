// ///////////////////////////////////////////////////////
//
// 名称: strtype1.cpp
// 描述: using the c++ string class
// 日期: 2021-04-11 10:58:16
//
// ///////////////////////////////////////////////////////
#include <iostream>
#include <string>
int main(void)
{
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    cout << "Enter a kind of feline: ";
    cin.getline(charr1,20);
    cout << "Enter another kind of feline: ";   // 无法解决字符中间带有空格的问题
    (cin >> str1).clear();
    cin.get();
    cin.clear();
    cout << "Here are some felines:\n";
    cout << charr1 << " " << charr2 << " "
         << str1 << " " << str2           // use cout for output
         << endl;
    cout << "The third letter in " << charr2 << " is "
         << charr2[2] << endl;
    cout << "The third letter in " << str2 << " is "
         << str2[2] << endl;               // use array notation

    // char charr1[20];                     // 创建空数组
    // char charr2[20] = "jaguar";          // 初始化一个数组
    // string str1;                         // 创建一个空字符串类
    // string str2 = "panther";             // 初始化一个字符串类
    // charr1 = charr2;                     // 无效，不能将一个数组赋给另一个数组
    // str1 = str2;                         // 可以将一个数组赋给另一个数组
    // string str3;
    // str3 = str1 + str2;                  // 字符串合并
    return 0;
}