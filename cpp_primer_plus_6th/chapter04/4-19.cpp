// ///////////////////////////////////////////////////////
// 名称: addpntrs.cpp
// 描述: pointer addition
// 日期: 2021-05-16 09:24:00
// ///////////////////////////////////////////////////////
#include <iostream>
int main()
{
    using namespace std;

    double wages[3] = {10000.0, 20000.0, 30000.0};
    short stacks[3] = {3,2,1};

// Here are two ways to get the address  of an array
    double * pw = wages;    // name of array = address
    short * ps = &stacks[0];    // or use address operator

// with array element
    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    pw = pw + 1;
    cout << "add 1 to the pw pointer:\n";
    cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";

    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    ps = ps + 1;
    cout << "add 1 to the ps pointer:\n";
    cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";

    cout << "access two elements with array notation\n";
    cout << "stacks[0] = " << stacks[0] << ", stack [1] = " << stacks[1] << endl;
    cout << "access two elements with pointer notation\n";
    cout << "*stacks = " << *stacks << ", *(stacks + 1) = " << *(stacks + 1) << endl;
    ps -= 1;
    cout << "*ps = " << *ps << ", *(ps + 1) = " << *(ps + 1) << endl;

    cout << sizeof(wages) << " = size of wages array\n";
    cout << sizeof(pw) << " = size of pw pointer\n";

    // 给指针赋值
    double * pn;
    double * pa;
    char * pc;
    double bubble = 3.2;
    pn = &bubble;
    pc = new char;
    pa = new double[30];
    delete pa;

    // 对指针解除引用
    cout << *pn << endl;
    *pc = 'S';

    // 区分指针和指针指向的值
    // int * pt = new int;
    // *pt = 5;

    // 指针算术
    int tacos[10] = {5,2,8,4,1,2,2,4,6,8};  // 静态联编，即数组的长度在编译时设置
    int *pt = tacos;                    // suppose pt and tacos are the address 3000
    cout << "tacos[0] address is " << &tacos[0] << endl;
    pt = pt + 1;                        // now pt is 3004 if a int is 4 bytes.
    cout << "now pt is " << pt << endl;
    cout << "now (tacos + 1) is " << (tacos + 1) << endl;
    int *pe = &tacos[9];                // pe is 3036 if an int is 4 bytes.
    cout << "now pe is " << pe << endl;
    // pe = pe - 1;                     // now pe is 3032, the address of tacos[8]
    int diff = pe - pt;                 // diff is 7, the separation between tacos[8] and tacos[1]
    cout << "diff is " << diff << endl; // 两者的差是字节数的差

    // 数组的动态联编和静态联编
    // int size;
    // cout << "Please input the size number: ";
    // cin >> size;
    // int * pz = new int [size];   //  动态联编，在运行时为数组分配空间
    int * pz = new int [5];         //  动态联编，在运行时为数组分配空间
    delete [] pz;                   // 使用完数组后，使用delete[] 释放占用的内存

    // 数组表示法和指针表示法
    int * px = new int [10];
    *px = 5;            // set element number 0 to 5
    px[0] = 6;          // reset element number 0 = 6
    px[9] = 44;         // set tenth element (element number 9) to 44
    int coats[10];
    *(coats + 4) = 12;  // set coats[4] = 12

    //指针和字符串
    char flower[10]  = "rose12345";
    // flower = flower + 1;    // flower 只是地址，地址加 1 没有意义
    cout << flower <<"s are red\n";
    char * fl = flower;
    fl = fl +1;                // fl 是指针char *， 指向flower的地址，指针加1 指向第2个元素'o'
    cout << fl <<"s are red\n";


    return 0;
}