// ///////////////////////////////////////////////////////
// 名称: choices.cpp
// 描述: array variations
// 日期: 2021-06-11 16:28:42
// ///////////////////////////////////////////////////////
#include <iostream>
#include <vector>   // STL C++98
#include <array>    // C++11
int main()
{
    using namespace std;
    // C, original C++
    double a1[4] = {1.2, 2.4, 3.6, 4.8};
    // C++98 STL
    vector<double> a2(4);   // create vector with 4 elements
    // no simple way to initialize in C98
    a2[0] = 1.0/3.0;
    a2[1] = 1.0/5.0;
    a2[2] = 1.0/7.0;
    a2[3] = 1.0/9.0;
    // C++11 -- create and initialize array object
    array<double, 4> a3 = {3.14, 2.27, 1.62, 1.41};
    array<double, 4> a4;
    a4 = a3;
    //use array notation
    cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
    cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
    cout << "a2[2]: " << a2.at(2) << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a3[2]: " << a3.at(2) << " at " << &a3[2] << endl;
    cout << "a3[0]: " << a3.begin() << " at " << &a3[0] << endl;
    cout << "a3[3]: " << a3.end() << " at " << &a3[3] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
    // misdeed 错误方式
    a2[-2]= 20.2;
    cout << "a2[-2]: " << a1[-2] << " at " << &a1[-2] << endl;
    for (auto i=a3.begin(); i !=a3.end();i++)
    {
        cout << "a3[" << i << "]: "<< *i << endl; 
    }
    return 0;
}
