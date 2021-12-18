// ///////////////////////////////////////////////////////
// 名称: test2c.pp
// 描述: 代码测试
// 日期: 2021-12-02 12:49:53
// ///////////////////////////////////////////////////////
#include <iostream>
int main(void)
{
    using namespace std;
    int j;
    for (j = 0; j < 11; j += 3)
        cout << j;
    cout << endl
         << j << endl;

    j = 5;
    while (++j < 9)
    {
        cout << j << " ";
        cout << j++ << endl;
    }
    int val = 1;
    for (int i = 0; i < 7; i++)
    {
        // val *= 2;
        // val = val^i;
        cout << "val = " << (val<<i) << endl;
    }

    int y;
    y = 1,024;
    

    return 0;
}
