// ///////////////////////////////////////////////////////
// 名称: enum.cpp
// 描述: 枚举
// 日期: 2021-05-04 08:34:54
// ///////////////////////////////////////////////////////
#include <iostream>
using namespace std;
int main(void)
{
    enum spectrum
    {
        red,
        orange,
        yellow,
        green,
        blue,
        violet,
        indigo,
        ultraviolet
    };
    spectrum band;  // band a variable of type spectrum
    band = blue;    // valid, blue is an enumerator
    // band = 2000;    // invalid, 2000 not an enumerator, 同时，不能将int类型赋值给枚举类型
    band = orange;  // valid
    // ++band;         // 枚举类型不适用++运算
    // band = red + blue;  // 枚举中值对应的是整数，使用加和运算将转化为整数，整数不能赋值给枚举类型
    band = spectrum(3);     // ! g++ 执行结果存在问题
    band = spectrum(4003);
    cout << "band = " << band << endl;
    if (band == green)
        cout << "band = green" << endl;
    else
        cout << "band != green" << endl;

    int color = ultraviolet;
    color = 3 + yellow;     // valid, yellow 转化为int
    cout << "color = " << color << endl;

    // enum 
    // {
    //     zero,
    //     one,
    //     two,
    //     three,
    //     four,
    //     five
    // } value;    // 匿名枚举类型，只是为了定义符号常量 one， two， three...    
    // value = three;
    // cout << "value = " << value << endl;

    enum bits
    {
        one = 1,
        two = 2,
        four = 4,
        eight = 8
    };
    bits myflag;
    myflag = bits(6);
    cout << "myflag = " << myflag << endl;

    enum bigstep
    {
        first,
        second = 100,
        third
    };
    cout << "third = " << third << endl;    // third 在second之后，自动+1
    bigstep step;
    step = bigstep(130);    // ! g++ 执行结果存在问题
    cout << "step = " << step << endl;

    // enum        // 枚举中可以创建多个值相同的枚举量
    // {
    //     zero,
    //     null = 0,
    //     one,
    //     numero_uno = 1
    // };
    // cout << "zero = " << zero << endl;
    // cout << "null = " << null << endl;

    return 0;
}