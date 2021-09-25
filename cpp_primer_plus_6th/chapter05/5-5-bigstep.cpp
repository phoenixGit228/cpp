// ///////////////////////////////////////////////////////
// 名称: bigstep.cpp
// 描述: count as directed
// 日期: 2021-08-04 21:38:58
// ///////////////////////////////////////////////////////
#include <iostream>
int main(void)
{
    using std::cin; // a using declaration
    using std::cout;
    using std::endl;
    cout << "Enter an integer: ";
    int by;
    cin >> by;
    cout << "Counting by " << by << "s:\n";
    for (int i = 0; i < 100; i = i + by)
        cout << i << endl;

    return 0;
}
