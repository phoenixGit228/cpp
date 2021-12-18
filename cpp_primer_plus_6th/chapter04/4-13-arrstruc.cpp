// ///////////////////////////////////////////////////////
//
// 名称: arrstruc.cpp
// 描述: 共用体数组
// 日期: 2021-05-03 11:21:26
//
// ///////////////////////////////////////////////////////
#include <iostream>
using namespace std;
struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main(void)
{
    inflatable guests[2] =
    {
        {"Bambi", 0.5, 21.99},
        {"Godzilla", 2000, 565.99}
    };

    cout << "The guests " << guests[0].name << " and " << guests[1].name
         << "\nhave a combined volume of " << guests[0].volume + guests[1].volume
         << " cubic feet.\n";

    inflatable gifts[100];
    cout << "请输入gifts[0]的体积：" << endl;
    cin >> gifts[0].volume;
    cout << gifts[99].price << endl;
    return 0;
}