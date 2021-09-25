// ///////////////////////////////////////////////////////
//
// 名称: init.cpp
// 描述: 初始化时的类型转换
// 日期: 2021-03-14 22:41:26
//
// ///////////////////////////////////////////////////////
#include <iostream>
int main(void)
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tree = 3;
    // int 转换为float 没有问题
    int guess(3.9832);
    // float 转换为 int，截断小数部分
    int debt = 7.2e12;
    // 很大的浮点数转为int，数据溢出，结果不确定
    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;

    //C++11 列表初始化{}, 要求更严格，不允许缩窄
    const int code = 66;
    int x = 66;
    char c1{31325};
    //缩窄，不允许
    char c2 = {66};
    char c3{code};
    char c4 = {x};
    //缩窄，不允许，因为x是一个变量，可能很大
    x = 31325;
    char c5 = x;
    //允许这种形式的初始化，但其实页出现数据溢出了
    cout << c5 << endl;
    cout << 31325 % 256;
    return 0;
}