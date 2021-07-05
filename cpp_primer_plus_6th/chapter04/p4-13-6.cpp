// ///////////////////////////////////////////////////////
// 名称: p4-13-5.cpp
// 描述: 命名初始化结构体
// 日期: 2021-07-05 11:00:57
// ///////////////////////////////////////////////////////
#include <iostream>


struct CandyBar
{
    char band[80];
    float weight;
    int calorie;
};
int main(void)
{

    using namespace std;

    CandyBar snack[3] =
    {
        {"Mocha Monch", 2.3, 250},
        {"chocolate", 3.6, 400},
        {"Big White Rabbit", 5.7, 200}
    };

    cout << "The snack's band is: " << snack[0].band << endl;
    cout << "The snack's weight is: " << snack[0].weight << endl;
    cout << "The snack's calorie are:" << snack[0].calorie << endl;
    cout << "The snack's band is: " << snack[1].band << endl;
    cout << "The snack's weight is: " << snack[1].weight << endl;
    cout << "The snack's calorie are:" << snack[1].calorie << endl;
    cout << "The snack's band is: " << snack[2].band << endl;
    cout << "The snack's weight is: " << snack[2].weight << endl;
    cout << "The snack's calorie are:" << snack[2].calorie << endl;

    return 0;
}
