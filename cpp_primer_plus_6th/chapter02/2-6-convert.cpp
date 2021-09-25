// ///////////////////////////////////////////////////////
//
// 名称: 2-6.cpp
// 描述: convert.cpp -- converts stone to pounds
// 日期: 2021-03-13 14:23:51
// 函数特性：
// 有函数头和函数体
// 接受一个参数
// 返回一个值
// 需要一个原型
// 
// ///////////////////////////////////////////////////////
#include <iostream>
using namespace std;            //影响本文件所有用到命名空间的cout定义
int stonetolb(int);             //有返回值的函数原型

int main(void)
{
    cout << "Enter the weight in stone: ";
    int stone;
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stone = "
         << pounds << "pounds." << endl;

    return 0;
}
int stonetolb(int sts)
{
    int pounds = 14 * sts;
    return pounds;
    //return 14 * sts;
}