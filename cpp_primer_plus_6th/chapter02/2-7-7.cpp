// ///////////////////////////////////////////////////////
//
// 名称: 2-7-7.cpp
// 描述: 输入小时数、分钟数，输出时间格式
// 日期: 2021-03-13 16:06:40
//
// ///////////////////////////////////////////////////////
#include <iostream>
void convert_time(int, int);
int main(void)
{
    using namespace std;

    int hour(0), minute(0);
    cout << "Enter the number of hours [0 - 23]: ";
    cin >> hour;
    cout << "Enter the number of minuters [0 - 59]: ";
    cin >> minute;
    convert_time(hour, minute);
    return 0;
}
void convert_time(int hour, int minute)
{
    using namespace std;

    if(minute > 10)
        cout << "Time: " << hour << ":" << minute << endl;
    else
        cout << "Time: " << hour << ":0" << minute << endl;
}