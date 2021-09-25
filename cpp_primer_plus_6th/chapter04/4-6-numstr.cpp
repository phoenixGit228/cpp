// ///////////////////////////////////////////////////////
//
// 名称: numstr.cpp
// 描述: following number input with line input
// 日期: 2021-04-11 10:44:25
//
// ///////////////////////////////////////////////////////
#include <iostream>
int main(void)
{
    using namespace std;
    cout << "What year was your house built?\n";
    int year;
    (cin >> year).get();
    // 等效代码
    // cin >> year;
    // cin.get()
    cout << "What is its street address?\n";
    char address[80];
    cin.getline(address, 80);
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";
    return 0;
}