// ///////////////////////////////////////////////////////
// 名称: average.cpp
// 描述: 使用array，输入成绩，求平均值
// 日期: 2021-07-18 11:43:24
// ///////////////////////////////////////////////////////
#include <iostream>
#include <array>

using namespace std;

int main(void)
{
    const int times = 3;
    array<int, times> score;
    cout << "Please input the first score: ";
    cin >> score[0];
    // cin.get();
    cout << "Please input the second score: ";
    cin >> score[1];
    // cin.get();
    cout << "Please input the third score: ";
    cin >> score[2];

    cout << "Your average score is: ";
    cout << (score[0] + score[1] + score[2]) / 3 << endl;

    return 0;
}
