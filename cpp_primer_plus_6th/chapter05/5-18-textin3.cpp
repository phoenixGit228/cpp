// ///////////////////////////////////////////////////////
// 名称: textin3.cpp
// 描述: reading chars to end of file
// 日期: 2021-10-21 09:07:46
// ///////////////////////////////////////////////////////
#include <iostream>
int main(void)
{
    using namespace std;
    char ch;
    int count = 0;
    cin.get(ch);        // attempt to read a char
    while(cin.fail() == false)  // 同while(!cin.fail())
    {
        cout << ch;     // echo character
        ++count;
        cin.get(ch);    // attempt to read another char
    }

    // 一种方法
    // while(cin)  // while input is successful
    // {
    //     ...
    // }

    // 一种方法
    // while(cin.get(ch))  // while input is successful
    // {
    //     ...     // do stuff
    // }
    
    // 另一种cin.get()
    // int ch;
    // ch = cin.get();
    // int count = 0;
    // while(ch!=EOF)
    // {
    //     cout.put(ch);       // 输出字符，输入类型char
    //     ++count;
    //     ch = cin.get();     // 返回输入的下一个字符
    // }
    cout << endl << count << " characters read\n";
    return 0;
}
