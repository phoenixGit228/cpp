// ///////////////////////////////////////////////////////
// 名称: compstr1.cpp
// 描述: comparing strings using arrays
// 日期: 2021-08-15 14:16:59
// ///////////////////////////////////////////////////////
#include <iostream>
#include <cstring>      // prototype fo strcmp()
int main()
{
    using namespace std;
    char word[5] = "?ate";
    for (char ch = 'a';strcmp(word, "mate"); ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;
    return 0;
}
