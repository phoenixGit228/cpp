// ///////////////////////////////////////////////////////
// 名称: compstr2.cpp
// 描述: comparing strings using sting class
// 日期: 2021-08-15 14:23:35
// ///////////////////////////////////////////////////////
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string word = "?ate";
    for (char ch= 'a'; word !="mate"; ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;
    return 0;
}
