// ///////////////////////////////////////////////////////
// 名称: p4-13-5.cpp
// 描述: 命名初始化结构体
// 日期: 2021-07-05 11:00:57
// ///////////////////////////////////////////////////////
#include <iostream>
#include <string>

using namespace std;

struct CandyBar
{
    string band;
    float weight;
    int calorie;
};
int main(void)
{
    CandyBar snack = {"Mocha Monch", 2.3, 250};
    cout << "The snack' band is: " << snack.band << endl;
    cout << "The snack's weight is: " << snack.weight << endl;
    cout << "The snack's calorie are:" << snack.calorie << endl;
    return 0;
}
