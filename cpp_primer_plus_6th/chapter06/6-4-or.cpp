// ///////////////////////////////////////////////////////
// 描述: using the logical OR operator
// 日期: 2022-02-12 16:34:29
// ///////////////////////////////////////////////////////
#include <iostream>
int main()
{
    using namespace std;
    cout << "This program may reformat your hard disk\n"
         << "and destroy all your data.\n"
         << "Do you wish to continue? <y/n> ";
    char ch;
    cin >> ch;
    if (ch == 'y' || ch == 'Y')         // y or Y
        cout << "Your were warned!\a\a\n";
    else if (ch == 'n' || ch == 'N')    // n or N
        cout << "A wise choise ... bye\n";
    else
        cout << "That wasn't a y or n! Apparently you "
                "can't follow\ninstructions, so "
                "I'll trash your disk anyway.\a\a\a\n";
    return 0;
}
