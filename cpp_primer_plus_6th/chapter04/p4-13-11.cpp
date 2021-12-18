// ///////////////////////////////////////////////////////
// 名称: average.cpp
// 描述: 使用vector，输入成绩，求平均值
// 日期: 2021-07-18 11:43:24
// ///////////////////////////////////////////////////////
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int times;
    cout << "Please input the times of your score: ";
    cin >> times;

    vector <int> score(times);
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
