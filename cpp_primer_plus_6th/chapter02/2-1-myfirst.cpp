// ///////////////////////////////////////////////////////
//
// 名称: 2.1.cpp
// 描述: myfirst.cpp displays a message
// 日期: 2021-03-13 09:57:24
//
// ///////////////////////////////////////////////////////
#include <iostream>        //预处理指令
// main()                  //该写法已淘汰
// int main()              //C++标准写法
// void main()             //不推荐，在有些系统可能不能正常工作
int main(void)             //推荐写法
{
    using namespace std;                        //using编译指令,偷懒方法，命名空间所有变量都可用
    //更好的做法是只使用所需名称
    //using std::cout;
    //using std::cin;
    //using std::endl;
    cout << "Come up and C++ me some time.";
    cout << endl;
    cout << "You won't regret it!" << endl;     //endl 控制符
    return 0;                                   //可以不写，但仅限于main函数
}
