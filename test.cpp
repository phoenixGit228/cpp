// ///////////////////////////////////////////////////////
//
// 名称: test.cpp
// 描述: 代码测试
// 日期: 2021-03-14 14:21:26
//
// ///////////////////////////////////////////////////////
#include <iostream>
#define VALUE 200
int main(void)
{
    using namespace std;

    bool is_ready = true;
    bool not_ready = false;

    int ans = is_ready;
    int stop = not_ready;

    cout << "is_ready is " << is_ready << endl;
    cout << "not_ready is " << not_ready << endl;
    cout << "ans is " << ans << endl;
    cout << "stop is " << stop << endl;
    const int months{12};
    cout << months << endl;
    cout << months << endl;
    cout << VALUE + 100 << endl;

    int tacos[10];
    cout << "size of tacos[0] " << sizeof(tacos[0]) << endl;  // 返回数组第一个元素占用字节数
    cout << "size of tacos[0] " << sizeof(&tacos[0]) << endl; // 返回内存地址字节数
    cout << "size of tacos " << sizeof(tacos) << endl; //返回整个数据占用字节数

    char flower[10]  = "rose";
    cout << flower <<"s are red\n";
    return 0;
}