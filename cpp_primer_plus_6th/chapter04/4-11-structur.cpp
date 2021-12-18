// ///////////////////////////////////////////////////////
//
// 名称: structur.cpp
// 描述: 一个简单的结构体
// 日期: 2021-05-03 09:38:53
//
// ///////////////////////////////////////////////////////
#include <iostream>
#include <string>
using namespace std;
struct inflatable   // 结构声明
{
    // 方法1：外部声明，放在函数体外，所有后面的函数都可使用；
    // 方法2：内部声明，放在函数体内，只有本函数可以使用
    string name;
    float volume;
    double price;
};
int main(void)
{
    inflatable guest =
        {
            "Glorious Gloria",
            1.88,
            29.99};     // guest is a structure variable of inflatable
    // It's initialized to the indicated values
    inflatable pal =
        {
            "Audacious Arthur",
            3.12,
            32.99};      // pal is a second variable of inflatable
    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";

    // pal.nameis  the name meber of the pal variable
    cout << "You can have both for $";
    cout << guest.price + pal.price << endl;

    inflatable duck = {"Daphne", 0.122, 9.98};      // 这里= 可以省略
    inflatable mayor{};
    cout << mayor.name << endl;
    cout << mayor.name.size() << endl;
    cout << mayor.price << endl;
    cout << mayor.volume << endl;
    // Note: some implementations require using static inflatable guest
    return 0;
}