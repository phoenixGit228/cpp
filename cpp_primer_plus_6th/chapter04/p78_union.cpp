// ///////////////////////////////////////////////////////
// 名称: union.cpp
// 描述: 共用体
// 日期: 2021-05-03 17:13:03
// ///////////////////////////////////////////////////////
#include <iostream>
using namespace std;
union one4all
{
    char ch;
    int int_val;
    long long_val;
    double double_val;
};
int main(void)
{
    union one4all pail;
    pail.int_val = 50;
    cout << "pail.ch: " << pail.ch << endl;
    cout << "pail.in_val: " << pail.int_val << endl;
    cout << "pail.long_val: " << pail.long_val << endl;
    cout << "pail.double_val: " << pail.double_val << endl;
    cout << endl;
    pail.ch = 'a';
    cout << "pail.ch: " << pail.ch << endl;
    cout << "pail.in_val: " << pail.int_val << endl;
    cout << "pail.long_val: " << pail.long_val << endl;
    cout << "pail.double_val: " << pail.double_val << endl;
    cout << endl;
    pail.long_val = 1000000065;
    cout << "pail.ch: " << pail.ch << endl;
    cout << "pail.in_val: " << pail.int_val << endl;
    cout << "pail.long_val: " << pail.long_val << endl;
    cout << "pail.double_val: " << pail.double_val << endl;
    cout << endl;
    pail.double_val = 1.3225e+6;
    cout << "pail.ch: " << pail.ch << endl;
    cout << "pail.in_val: " << pail.int_val << endl;
    cout << "pail.long_val: " << pail.long_val << endl;
    cout << "pail.double_val: " << pail.double_val << endl;

    return 0;
}
