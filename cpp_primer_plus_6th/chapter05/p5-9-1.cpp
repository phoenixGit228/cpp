// ///////////////////////////////////////////////////////
// 名称: p5-9-1.cpp
// 描述: 
// 日期: 2021-12-02 13:06:54
// ///////////////////////////////////////////////////////
#include <iostream>
int main()
{
    using namespace std;
    int min;
    cout << "Please enter the minimum number: ";
    cin >> min;
    int max;
    cout << "Now please enter the maximum number: ";
    cin >> max;
    int total = 0;
    for (int i = min; i < max +1;i ++)
        total += i;
    cout << "The sum between " << min << " and " << max << " is " << total << endl;
    return 0;
}
