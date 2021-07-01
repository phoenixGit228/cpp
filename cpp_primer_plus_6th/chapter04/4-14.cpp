// ///////////////////////////////////////////////////////
// 名称: address.cpp
// 描述: 使用&运算符找到变量地址
// 日期: 2021-05-04 09:29:12
// ///////////////////////////////////////////////////////
#include <iostream>
int main(void)
{
    using namespace std;
    int donuts = 6;
    double cups = 4.5;

    cout << "donuts value = " << donuts;
    cout << " and donuts address = " << &donuts << endl;

    // NOTE: you may need to use unsigned (&donuts)
    // and unsigned (&cups)
    cout << "cups value = " << cups;
    cout << " and cups address = " << &cups << endl;
    
    return 0;
}