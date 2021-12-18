// ///////////////////////////////////////////////////////
//
// 名称: assgn_st.cpp
// 描述: assigning structure
// 日期: 2021-05-03 10:07:43
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
    inflatable bouquet = {"sunflowers", 0.20, 12.49};
    inflatable choice;
    cout << "bouquet: " << bouquet.name << " for $";
    cout << bouquet.price << endl;

    choice = bouquet;   // assign one structure to another
    cout << "choice: " << choice.name << " for $";
    cout << choice.price << endl;
    struct preks        // 同时定义结构和创建变量
    {
        int key_number;
        char car[12];
    } mr_smith, ms_jones;   // two perks variables
    struct per          // 定义结构和初始化
    {
        int key_number;
        char car[12];
    } mr_glitz =
        {
            7, "Packard"};
    struct              // 创建没用名称的结构类型
    {
        int x;
        int y;
    } position;

    return 0;
}