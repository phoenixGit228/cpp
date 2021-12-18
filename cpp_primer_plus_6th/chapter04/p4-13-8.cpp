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
    pizza * ppizza = new pizza;
    cout << "Please enter the corporation name: ";
    getline(cin, ppizza->corp);
    cout << "please enter diameter of the pizza: ";
    cin >> ppizza->diameter;
    cout << "Please enter weight of the pizza: ";
    cin >> ppizza->weight;
    // 指针变量需要使用“ -> ”成员运算符，而不是“. ”成员运算符

    cout << "pizza corporation: " << ppizza->corp << endl;
    cout << "pizz diameter: " << ppizza->diameter << endl;
    cout << "pizza weight: " << ppizza->weight << endl;

    delete ppizza;

    return 0;
}
