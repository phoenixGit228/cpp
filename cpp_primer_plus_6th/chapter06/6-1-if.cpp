// ///////////////////////////////////////////////////////
// 描述: using the if statement     
// 日期: 2022-02-10 09:38:41
// ///////////////////////////////////////////////////////
#include <iostream>
int main(void)
{
    using std::cin;
    using std::cout;
    char ch;
    int spaces = 0;
    int total = 0;
    cin.get(ch);
    while(ch!='.')
    {
        if (ch ==' ')
            ++spaces;
        ++total;
        cin.get(ch);
    }
    cout << spaces << " spaces, " << total;
    cout << " characters total in sentence\n";
    return 0;
}
