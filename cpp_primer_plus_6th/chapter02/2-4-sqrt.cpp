// ///////////////////////////////////////////////////////
//
// 名称: 2-4.cpp
// 描述: sqrt.cpp -- using the sqrt() function
// 日期: 2021-03-13 11:47:54
//
// ///////////////////////////////////////////////////////
#include <iostream>
#include <cmath> //or math.h

using namespace std;

int main(void)
{
    double area;
    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;
    double side;
    side = sqrt(area);              
    //函数在使用之前需要声明，一般在main函数之前进行函数声明或者使用头文件进行声明
    //函数调用必须包括括号，即使没有参数
    //double side = sqrt(area);     创建变量时对其进行赋值，初始化
    cout << "That's the equivalent of a square " << side
         << " feet to the side." << endl;
    cout << "How fascinating!" << endl;
    return 0;
}