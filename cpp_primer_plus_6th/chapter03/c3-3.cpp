// ///////////////////////////////////////////////////////
//
// 名称: degree.cpp
// 描述: 输入度，分，秒，显示多少度
// 日期: 2021-03-24 22:02:49
//
// ///////////////////////////////////////////////////////
#include <iostream>

int main(void)
{
    using namespace std;

    cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
    cout << "First, enter the degrees: ";
    int degrees;
    cin >> degrees;
    cout << "Next, enter the minuters of arc: ";
    int minutes;
    cin >> minutes;
    cout << "Finally, enter the seconds for arc: ";
    int seconds;
    cin >> seconds;
    cout << degrees << " degrees, " << minutes << " minutes, " << seconds
         << " seconds = " << degrees + minutes / 60.0 + seconds / 3600.0
         << " degrees" << endl;
    return 0;
}