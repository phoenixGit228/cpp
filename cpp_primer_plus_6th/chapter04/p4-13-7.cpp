// ///////////////////////////////////////////////////////
// 名称: pizza.cpp
// 描述: 结构体
// 日期: 2021-07-05 12:55:23
// ///////////////////////////////////////////////////////
#include <iostream>
#include <string>
using namespace std;
struct pizza
{
    string corp;
    float diameter;
    float weight;
};
int main(void)
{
    pizza pizza_info;
    cout << "Please enter the corporation name: ";
    getline(cin, pizza_info.corp);
    cout << "please enter diameter of the pizza: ";
    cin >> pizza_info.diameter;
    cout << "Please enter weight of the pizza: ";
    cin >> pizza_info.weight;

    cout << "pizza corporation: " << pizza_info.corp << endl;
    cout << "pizz diameter: " << pizza_info.diameter << endl;
    cout << "pizza weight: " << pizza_info.weight << endl;

    return 0;
}
