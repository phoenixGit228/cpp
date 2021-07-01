// ///////////////////////////////////////////////////////
//
// 名称: 2-2.cpp
// 描述: carrots.cpp -- food processing program, uses and displays a variable
// 日期: 2021-03-13 11:07:30
//
// ///////////////////////////////////////////////////////
#include <iostream>
int main()
{
    using namespace std;

    int carrots;                    //定义声明语句；通常声明不一定是定义，在这里声明是定义；

    carrots = 25;
    cout << "I have ";
    cout << carrots;
    cout << " carrots.";
    cout << endl;
    carrots = carrots - 1;
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
    return 0;
}