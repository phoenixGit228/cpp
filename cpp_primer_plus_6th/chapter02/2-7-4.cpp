// ///////////////////////////////////////////////////////
//
// 名称: 2-7-4.cpp
// 描述: 输入年龄，输出包含多少个月
// 日期: 2021-03-13 15:39:25
//
// ///////////////////////////////////////////////////////
#include <iostream>
int main(void)
{
    using namespace std;
    cout << "Enter your age: ";
    int age;
    cin >> age;
    cout << "Age: " << age << " include "
         << age * 12 << " months." << endl;
    return 0;
}