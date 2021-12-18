// ///////////////////////////////////////////////////////
//
// 名称: morechar.cpp
// 描述: the char type and int type contrasted
// 日期: 2021-03-14 09:27:48
//
// ///////////////////////////////////////////////////////
#include <iostream>
int main(void)
{
    using namespace std;
    char ch = 'M';
    int i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Add one to the character code:" << endl;
    ch = ch + 1;
    i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    //使用cout.put()成员函数显示一个字符
    cout << "Displaying char ch using cout.put(): ";
    cout.put(ch);
    //使用cout.put()成员函数显示一个字符
    cout.put('!');
    cout << endl;
    cout << '\n';
    cout << "\n";
    cout << endl
         << "Done!" << endl;
    return 0;
}