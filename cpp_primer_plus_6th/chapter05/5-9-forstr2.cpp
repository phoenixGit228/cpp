// ///////////////////////////////////////////////////////
// 名称: forstr2.cpp
// 描述: reversing an array
// 日期: 2021-08-04 22:12:02
// ///////////////////////////////////////////////////////
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    cout << "Enter a word: ";
    string word;
    cin >> word;
    // physically modify string object
    char temp;
    int i, j;
    for (j = 0, i = word.size() - 1; j < i; --i, ++j)
    {                           // start block
        temp = word[j];
        word[j] = word[i];
        word[i] = temp;
    }                           // end block
    cout << word << endl;

    i = 20, j = i * 2;
    cout << "i = " << i << "; j = " << j << endl;
    int cats, dogs;
    // 在所有运算中逗号运算符优先级是最低的
    cats = 17, 20;              // 等价于(cats = 17), 20;
    cout << "cats = " << cats << endl;
    cats = (17, 20);            // 括号优先级最高，先计算最右侧的值
    cout << "cats = " << cats << endl;

    return 0;
}
