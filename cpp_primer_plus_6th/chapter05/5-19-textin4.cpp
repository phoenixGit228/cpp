// ///////////////////////////////////////////////////////
// 名称: textin4.cpp
// 描述: reading chars with cin.get()
// 日期: 2021-10-31 08:35:41
// ///////////////////////////////////////////////////////
#include <iostream>
int main(void)
{
    using namespace std;
    int ch;
    int count = 0;

    // 当前程序接收到EOF后，还不能直接输出结果，需要改进
    // test for end-of-file，这里ch=cin.get() 可以替换成cin.get(ch)
    cout << "Please input some characters to count the sum." << endl;
    while((ch = cin.get()) != EOF)  
    {
        cout.put(char(ch));     // 将int型转为char型
        count++;
    }
    cout << "字符数：" << count << endl;
    return 0;
}
