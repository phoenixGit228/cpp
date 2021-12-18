// ///////////////////////////////////////////////////////
//
// 名称: 2-5.cpp
// 描述: ourfunc.cpp -- defining your own function
// 日期: 2021-03-13 14:06:24
//
// ///////////////////////////////////////////////////////
#include <iostream>
void simon(int);                //simon函数原型

using namespace std;

int main(void)
{
    simon(3);                   //调用simon函数
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    simon(count);               //再次调用simon函数
    cout << "Done!" << endl;
    return 0;
}

//函数定义
void simon(int n)               //函数头
{
    using namespace std;
    cout << "Simon says touch your toes " << n << " times." << endl;    //函数体
    // void functions don't need return statements
}