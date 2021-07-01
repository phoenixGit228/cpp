// ///////////////////////////////////////////////////////
//
// 名称: divide.cpp
// 描述: integer and floating-point division
// 日期: 2021-03-14 22:03:47
//
// ///////////////////////////////////////////////////////
#include <iostream>
int main(void)
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Integer division: 9 / 5 = " << 9 / 5 << endl;
    cout << "floating-point division: 9.0 / 5.0 = " << 9.0 / 5.0 << endl;
    cout << 9.0 / 5.0 << endl;
    cout << "Mixed division: 9.0/5 = " << 9.0 / 5 << endl;
    cout << "double constants: 1e7/9.0 = " << 1.e7 / 9.0 << endl;
    cout << "float constants: 1e7f/9.0f = "
         << 1.e7f / 9.0f << endl;
    return 0;
}