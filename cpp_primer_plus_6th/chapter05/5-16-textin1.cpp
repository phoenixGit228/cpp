// ///////////////////////////////////////////////////////
// 名称: textin1.cpp
// 描述: reading chars with a while loop
// 日期: 2021-09-26 22:54:06
// ///////////////////////////////////////////////////////
#include <iostream>
int main()
{
    using namespace std;

    char ch;
    int count = 0;       // using basic input
    cout << "Enter characters; enter # to quit: \n";
    cin >> ch;          // get a character
    while(ch != '#')    // test the character
    {
        cout << ch;     // echo the character
        ++count;         // cout the character
        cin >> ch;      // get the character
    }
    cout << endl << count << " characters read\n";

    return 0;
}
