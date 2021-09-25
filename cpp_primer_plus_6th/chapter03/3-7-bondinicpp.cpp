// ///////////////////////////////////////////////////////
//
// 名称: bondinicpp
// 描述: using eacape sequences
// 日期: 2021-03-14 12:57:31
//
// ///////////////////////////////////////////////////////
#include <iostream>
int main(void)
{
    using namespace std;
    cout << "\aOperation \"HyerpHype\" is now activatedd!\n";
    cout << "Enter your agent code:____________\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\007You entered " << code << "....\n";
    cout << "\aCode verified! Proceed with Plan Z3!\n";
    return 0;
}