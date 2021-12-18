// ///////////////////////////////////////////////////////
//
// 名称: strtype4.cpp
// 描述: line input
// 日期: 2021-05-03 09:10:50
//
// ///////////////////////////////////////////////////////
#include <iostream>
#include <string>
#include <cstring>
int main(void)
{
    using namespace std;

    char charr[20] {};
    string str;

    cout << "Length of string in charr before input: "
         << strlen(charr) << endl;
    cout << "Length of string in str before input: "
         << str.size() << endl;
    cout << "Enter a line of text:\n";
    cin.getline(charr, 20);     // indicate maximum length
    cout << "Your entered: " << charr << endl;
    cin.get();
    cout << "Enter another line of text:\n";
    getline(cin, str); // cin now an argument; no length specifer
    cout << "You entered: " << str << endl;
    cout << "Length of string in charr after input: "
         << strlen(charr) << endl;
    cout << "Length of string in str after input: "
         << str.size() << endl;

    // 原始字符串
    cout << R"(Jim "King" Tutt uses "\n" instead of endl.)" << endl;

    return 0;
}