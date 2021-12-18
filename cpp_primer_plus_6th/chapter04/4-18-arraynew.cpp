// ///////////////////////////////////////////////////////
// 名称: arraynew.cpp
// 描述: using the new operator for arrays
// 日期: 2021-05-16 09:13:29
// ///////////////////////////////////////////////////////
#include <iostream>
int main()
{
    using namespace std;

    double * p3 = new double [3];  // space for 3 double
    p3[0] = 0.2;        // treat p3 like an array name
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 +1;         // increment the pointer
    cout << "Now p3[0] is " << p3[0] << " and ";
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 -1;         // point back to beginning
    cout << "p3[0] is " << p3[0] << ".\n";
    delete [] p3;       // 释放内存
    return 0;
}