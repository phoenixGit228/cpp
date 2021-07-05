// ///////////////////////////////////////////////////////
// 名称: p4-13-4.cpp
// 描述: 使用string类拼接字符串
// 日期: 2021-07-05 10:55:36
// ///////////////////////////////////////////////////////
#include <iostream>
#include <string>
int main(void)
{
    using namespace std;

    string first_name, last_name;
    cout << "Enter your first name: ";
    getline(cin, first_name);
    cout << "Enter your last name: ";
    getline(cin, last_name);
    cout << "Here's the information in a single string: " << last_name + ", " + first_name << endl;

    return 0;
}
