// ///////////////////////////////////////////////////////
// 描述: 根据指定行数，显示星号
// 日期: 2022-02-10 09:09:33
// ///////////////////////////////////////////////////////
#include <iostream>

int main(void)
{
    using std::cout;
    using std::cin;
    using std::endl;

    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i=0; i < rows; i++)
    {
        for(int j = 1; j < rows - i; j++)
            cout << ".";
        for(int j = 0; j <= i; j++)
            cout << "*";
        cout << endl;
    }

    return 0;
}
