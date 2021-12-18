// ///////////////////////////////////////////////////////
//
// 名称: 2-7-3.cpp
// 描述: 3函数，输出
// 日期: 2021-03-13 15:16:21
//
// ///////////////////////////////////////////////////////
#include <iostream>
void mice(void);
void say(void);

int main(void)
{
    mice();
    mice();
    say();
    say();

    return 0;
}
void mice(void)
{
    using namespace std;
    cout << "Three blind mice" << endl;
}
void say(void)
{
    using namespace std;
    cout << "See how they run" << endl;
}