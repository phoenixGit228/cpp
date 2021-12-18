// ///////////////////////////////////////////////////////
// 名称: ptrstr.cpp
// 描述: using pointers to strings
// 日期: 2021-05-16 20:56:24
// ///////////////////////////////////////////////////////
#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    char animal[20] = "bear";           // 初始化字符串数组，使用=运算符
    const char * bird = "wren";
    char * ps;

    cout << animal << " and " << bird << "\n";
    cout << "A concerned " << bird << " speaks! \n";
    // cout << ps << "\n";
    cout << strlen(animal) << endl;
    cout << "Enter a kind of animal: ";
    cin >> animal;
    // cin >> ps; Too horrible a blunder to try; ps doesn't point to allocated space

    ps = animal;
    cout << ps << "!\n";
    cout << *ps << endl;
    cout << *(ps + 1) << endl;
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int *) ps << endl;

    ps = new char [strlen(animal +1)];  //创建char 数组
    strcpy(ps, animal);                 // 将animal中的字符拷贝至ps
    cout << ps << endl;
    delete ps;                          //删除new 创建的变量，使用delete关键字
    int * numbers = new int [20];

    for (int i=0;i<20;i++)
    {
        *(numbers +i) = i;
    }
    cout << *(numbers + 5) << endl;
    delete [] numbers;      // 删除由new创建的指针数组，delete [] 指针名
    return 0;
}