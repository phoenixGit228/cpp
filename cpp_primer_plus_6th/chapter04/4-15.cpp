// ///////////////////////////////////////////////////////
// 名称: pointer.cpp
// 描述: 我们的第一个指针变量
// 日期: 2021-05-04 14:26:22
// ///////////////////////////////////////////////////////
#include <iostream>
#include <typeinfo>
int main(void)
{
    using namespace std;
    int updates = 6;    // 声明一个变量
    int* p_updates;     // 声明指针
    p_updates = &updates;   //把update地址赋给指针

    // express values two ways
    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

    updates += 1;
    cout << "Now updates = " << updates << endl;    
    cout << "&updates = " << &updates << endl;

    // express address two ways
    cout << "Address: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

    // 利用指针改变值，注意：只是该处地址的值变了，地址没变
    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;    
    cout << "&updates = " << &updates << endl;

    int* p1, p2;
    cout << "p1 type: " << typeid(p1).name() << endl;
    cout << "p2 type: " << typeid(p2).name() << endl;

    double *tax_ptr;
    char *str;

    int higgens = 5;
    int *pt = &higgens;
    cout << "Address: &higgens = " << &higgens;
    cout << ", pt = " << pt << endl;

    // int *px = 10;       //不能将值直接赋给指针
    // cout << "value: *px = " << *px << endl;
    

    return 0;
}