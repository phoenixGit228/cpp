// ///////////////////////////////////////////////////////
// 名称: forloop.cpp
// 描述: introducing the for loop
// 日期: 2021-07-18 21:47:00
// ///////////////////////////////////////////////////////
#include <iostream>
int main(void)
{
    using namespace std;
    int i;      // create a counter
    // initialize; test; update
    // 1. 设置初始值
    // 2. 执行测试
    // 3. 执行循环操作
    // 4. 更新用于测试的值
    // for (initialize; test-expression; update-expression)
    //      body
    for (i = 0; i < 5; i++)
        cout << "C++ knows loops.\n";
    cout << "C++ knows when to stop.\n";

    return 0;
}
