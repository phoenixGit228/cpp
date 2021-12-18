// ///////////////////////////////////////////////////////
// 名称: textin2.cpp
// 描述: using cin.get(char)
// 日期: 2021-10-21 09:03:37
// ///////////////////////////////////////////////////////
#include <iostream>
int main(void)
{
    using namespace std;
    char ch;
    int count = 0;

    cout << "Enter characters; enter # to quit:\n";
    cin.get(ch);    // use the cin.get(ch) function
    while(ch != '#')
    {
        cout << ch;
        ++count;
        cin.get(ch);    // use it again
    }
    cout << endl << count << " characters read\n";
    return 0;
}
