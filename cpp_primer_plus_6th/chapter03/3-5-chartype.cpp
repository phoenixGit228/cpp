// ///////////////////////////////////////////////////////
//
// 名称: chartype.cpp
// 描述: the char type
// 日期: 2021-03-14 09:18:18
//
// ///////////////////////////////////////////////////////
#include <iostream>
int main(void)
{
    using namespace std;
    char ch;

    cout << "Enter a character: " << endl;
    cin >> ch;
    cout << "Hola! ";
    cout << "Thank you for the " << ch << " character.(int -- "
         << int(ch) << ")" << endl;
    return 0;
}