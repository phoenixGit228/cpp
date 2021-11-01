// ///////////////////////////////////////////////////////
// 名称: dowhile.cpp
// 描述: exit-condition loop
// 日期: 2021-09-26 22:11:03
// ///////////////////////////////////////////////////////
#include <iostream>
int main()
{
    using namespace std;
    int n;

    cout << "Enter number in the range 1-10 to find";
    cout << " my favorite number\n";
    do{
        cin >> n;
    }while(n != 7);     // 条件满足，继续执行，否则结束循环
    cout << "Yes, 7 is my favorite number.\n";


    // 另一种for循环，形式1
    int I = 0;
    for (;;)
    {
        I++;
        cout << "I = " << I << endl;
        if (I >=10) break;
    }

    // for循环另一种变体
    for (;;I--)
    {
        if (I <= 0) break;
        cout << "I = " << I <<endl;

    }

    do{
        I++;
        cout << "I = " << I <<endl;
    }while (I > 10);
    
    // 基于范围的for循环
    double prices[5] = {4.99, 10.99, 6.87, 7.99, 8.49};
    for (double x : prices)     // 循环遍历数组的每个元素
    {

        cout << "x in prices[5] : " << x << endl;
        x +=1.0;
    }
    for (double x : prices)     // 经过上面的循环加 1，数组元素并不改变
    {
        cout << "x in prices[5] : " << x << endl;
    }

    // 修改数组元素
    for (double &x : prices)    // 修改数组元素，引用变量
    {
        x = x *10;
    }
    for (double x : prices)     // 经过上面的循环 *10，数组元素已经改变
    {
        cout << "x in prices[5] : " << x << endl;
    }

    // 基于范围的for循环初始化列表
    for (int x :{3,5,6,8,2})
        cout << x << " ";
    cout << "\n";

    return 0;
}
