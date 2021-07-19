// ///////////////////////////////////////////////////////
// 名称: express.cpp
// 描述: values of expressions
// 日期: 2021-07-19 09:23:13
// ///////////////////////////////////////////////////////
#include <iostream>
int main(void)
{
    using namespace std;
    int x;
    cout << "The expression x = 100 has the value ";
    cout << (x = 100) << endl;
    cout << "Now x = " << x << endl;
    cout << "The expression x < 3 has the value ";
    cout << (x < 3) << endl;
    cout << "The express x > 3 has the value ";
    cout << (x > 3) << endl;
    cout.setf(ios_base::boolalpha);     // a newer c++ feature
    cout << "The expression x < 3 has the value ";
    cout << (x < 3) << endl;
    cout << "The expression x > 3 has the value ";
    cout << (x > 3) << endl;
    return 0;
}
