// ///////////////////////////////////////////////////////
// 名称: forstr1.cpp
// 描述: using for with a string
// 日期: 2021-08-04 21:43:20
// ///////////////////////////////////////////////////////
#include <iostream>
#include <string>
int main(void)
{
    using namespace std;
    cout << "Enter a word: ";
    string word;
    cin >> word;

    // display letters in reverse order
    for (int i = word.size() - 1; i >= 0; i--)
        cout << word[i];
    return 0;
}
