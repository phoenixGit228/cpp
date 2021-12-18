// ///////////////////////////////////////////////////////
// 名称: block.cpp
// 描述: using a block statement
// 日期: 2021-08-04 21:58:07
// ///////////////////////////////////////////////////////
#include <iostream>
int main(void)
{
    using namespace std;

    cout << "The Amazing Accounto will sum and average ";
    cout << "five numers for you.\n";
    cout << "Please enter five values:\n";
    double number;
    double sum = 0.0;
    for (int i = 1; i <= 5; i ++)
    {
        cout << "Value " << i << ": ";
        cin >> number;
        sum += number;
    }
    cout << "Five exquisite choices indeed! ";
    cout << "They sum to " << sum << endl;
    cout << "and average to " << sum / 5 << ".\n";
    cout << "The Amazing Accounto bids you adieu!\n";

    return 0;
}
