// ///////////////////////////////////////////////////////
// 名称: equal.cpp
// 描述: equality vs assignment
// 日期: 2021-08-05 21:52:19
// ///////////////////////////////////////////////////////
#include <iostream>
int main()
{
    using namespace std;
    const int size = 10;
    int quizscores[size] = {20, 20, 20, 20, 20, 19, 20, 18, 20, 20};
    cout << "Doing it right:\n";
    int i;
    for (i = 0; quizscores[i] == 20 && i < size; i++)
        cout << "quiz " << i << " is a 20\n";

    // warning: you may prefer reading about this program
    // to actually running it.
    cout << "Doing it dangerously wrong:\n";
    for (i = 0; quizscores[i] = 20; i++)    //错误，注意"=="和 "="
        cout << "quiz " << i << " is a 20\n";
    for (i = 0; i < size; i++)
        cout << "quiz " << i << " = " << quizscores[i] << endl;
    system("pause");
    return 0;
}
