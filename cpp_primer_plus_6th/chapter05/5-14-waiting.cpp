// ///////////////////////////////////////////////////////
// 名称: waiting.cpp
// 描述: using clock() in a tinme-delay loop
// 该程序以系统时间单位未单位（而不是以秒为单位）计算延迟时间
// 避免了在每轮循环中将系统时间转换为秒
// 日期: 2021-09-25 09:25:11
// ///////////////////////////////////////////////////////
#include <iostream>
#include <ctime>    // describes clock() function, clock_t type
int main(void)
{
    using namespace std;

    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs* CLOCKS_PER_SEC;   // convert to clock ticks
    cout << "starting\a\n";
    clock_t start = clock();
    while (clock() - start < delay)         // wait until time elapse
        ;
    cout << "done \a\n";                    // note the semicolon
    return 0;
}
