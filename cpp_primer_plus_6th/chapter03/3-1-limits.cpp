// ///////////////////////////////////////////////////////
//
// 名称: 3-1.cpp
// 描述: limits.cpp -- some integer limits
// 日期: 2021-03-13 17:53:45
//
// ///////////////////////////////////////////////////////
#include <iostream>
#include <climits>
int main(void)
{
    using namespace std;
    int n_int = INT_MAX;
    //初始化n_int 整型int最大值
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    // sizeof operator yields size of type or of variable
    // 对类型使用sizeof运算符时，需要使用()
    // 对变量使用sizeof运算符，()可选
    cout << "int is " << sizeof(int) << " bytes." << endl;
    cout << "short is " << sizeof(short) << " bytes." << endl;
    cout << "long is " << sizeof n_long << " bytes." << endl;
    cout << "long long is " << sizeof n_llong << " bytes." << endl;
    cout << endl;

    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl;

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;
    return 0;
}