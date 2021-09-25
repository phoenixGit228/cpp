// ///////////////////////////////////////////////////////
//
// 名称: arith.cpp
// 描述: some c++ arithmetic
// 日期: 2021-03-14 21:47:27
//
// ///////////////////////////////////////////////////////
#include <iostream>
int main(void)
{
    using namespace std;
    float hats, heads;

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Enter a number: ";
    cin >> hats;
    cout << "Enter another number: ";
    cin >> heads;

    //注意结果的精度，float只保证6位有效位，如果需要更高的精度
    //请使用double， long double
    cout << "hats = " << hats << "; heads = " << heads << endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl;

    cout << 120 / 4 * 5 << endl;
    return 0;
}