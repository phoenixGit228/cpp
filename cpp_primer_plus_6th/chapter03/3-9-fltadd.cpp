// ///////////////////////////////////////////////////////
//
// 名称: fltadd.cpp
// 描述: precision problems with float
// 日期: 2021-03-14 21:37:59
//
// ///////////////////////////////////////////////////////
#include <iostream>
int main(void)
{
    using namespace std;
    float a = 2.34E+22f;
    float b = a + 1.0f;
    cout << "a = " << a << endl;
    cout << "b -a = " << b - a << endl;
    return 0;
}