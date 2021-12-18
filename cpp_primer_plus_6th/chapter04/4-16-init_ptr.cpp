// ///////////////////////////////////////////////////////
// 名称: init_ptr.cpp
// 描述: 初始化一个指针，同时需注意使用指针的危险
// 日期: 2021-05-04 15:13:31
// ///////////////////////////////////////////////////////
#include <iostream>
int main(void)
{
    using namespace std;
    int higgens = 5;
    int *pt = &higgens; //将pt初始化为higgens的地址，而不是将*pt初始化

    cout << "Value of higgens = " << higgens
         << "; Address of higgens = " << &higgens << endl;
    cout << "Value of *pt = " << *pt
         << "; Value of pt = " << pt << endl;

    // ！！C++中创建指针时，计算机将分配用来存储地址的内存，
    // 但不会分配用来存储指针所指向的数据的内存。
    // 以下语句将出错
    // long *fellow = 223323;

    // 以下语句虽然不会报错，但是对指针使用*运算符之前，一定要将指针初始化为要给确定的，适当的地址！
    long *fellow;     // create a pointer-to-long
    *fellow = 223323; // place a value in never-never land
    cout << *fellow << endl;
    cout << fellow << endl;

    // 指针指向的是地址（内存中的位置），虽然内存中位置通常用整数表示
    // 但不能将整数赋给指针，同时指针也不能执行加、减、乘、除运算，并且也没用意义
    int *pp;
    // pp = 0x61ff2f;
    pp = (int *)0x61fe04;       
    // 要将数字值作为地址来用，应通过强制类型转换将数字转换为适当的地址类型，如上
    // 同时应注意：pp是int值的地址，并不意味着pp本身是int类型的指针
    cout << "pp = " << pp
         << ", *pp = " << *pp << endl;
    return 0;
}