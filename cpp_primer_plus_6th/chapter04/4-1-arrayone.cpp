// ///////////////////////////////////////////////////////
//
// 名称: arrayone.cpp
// 描述: small arrays of integers
// 日期: 2021-04-11 08:45:28
//
// ///////////////////////////////////////////////////////
#include <iostream>
int main(void)
{
    using namespace std;
    int yams[3];    // creats array with three elements
    yams[0] = 7;    // assign value to first element
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] = {20, 30, 5}; // create, initialize array
    // NOTE: If your C++ compiler or translator can't initialize
    // this array, use static int yamcosts[3] instead of 
    // int yamcosts[3]

    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << "The package with " << yams[1] << " yams costs ";
    cout << yamcosts[1] << " cents per yam.\n";
    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total = total + yams[2] * yamcosts[2];
    cout << "The total yam expense is " << total << " cents\n";

    cout << "\nSize of yams array = " << sizeof yams;
    cout << " bytes.\n";
    cout << "Size of one element = " << sizeof yams[0];
    cout << " bytes.\n";
    short things[] = {1, 4, 5, 6};  //初始化时，不设置数组长度（[]为空），编译器自动计算数组长度
    for (int i = 0; i < 4; i ++)    // 测试
    {
        cout << things[i] << endl;
    }
    float hotelTips[5] = {5.0, 2.5}; // 初始化部分元素，编译器自动将其他元素设为0
    for (int i = 0; i < 5;i++)       // 测试   
    {
        cout << hotelTips[i] << endl;
    }

    double earnings[4]{1.2e4, 1.6e4, 1.1e4, 1.7e4}; //C++11 初始化可省略=

    unsigned int counts[10]{0};      //C++11 所有元素将设置为0
    for (int i = 0; i < 10;i++)     // 测试
    {
        cout << counts[i] << endl;
    }
    
    return 0;
}
