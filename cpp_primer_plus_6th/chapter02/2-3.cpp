// ///////////////////////////////////////////////////////
//
// 名称: 2-3.cpp
// 描述: getinfo.cpp -- input and output
// 日期: 2021-03-13 11:22:30
//
// ///////////////////////////////////////////////////////
#include <iostream>
using namespace std;
int main(void)
{
    int carrots(0);

    cout << "How many carrots do you have?" << endl;
    cin >> carrots;
    cout << "Here are two more. ";
    carrots = carrots + 2;
    cout << "Now you have " << carrots << " carrots." << endl;  // concatenates output
    return 0;
}