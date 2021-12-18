// ///////////////////////////////////////////////////////
// 名称: plus_one.cpp
// 描述: the increment operator
// 日期: 2021-08-04 21:49:22
// ///////////////////////////////////////////////////////
#include <iostream>
int main(void)
{
    using std::cout;
    using std::endl;
    int a = 20;
    int b = 20;
    cout << "a = " << a << "; b = " << b << endl;
    cout << "a++ = " << a++ << "; ++b = " << ++b << endl;
    cout << "a = " << a << "; b = " << b << endl;
    return 0;
}
