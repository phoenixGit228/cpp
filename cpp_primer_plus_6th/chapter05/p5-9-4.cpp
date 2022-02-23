// ///////////////////////////////////////////////////////
// 名称: 5-9-4.cpp
// 描述:
// 日期: 2021-12-14 12:41:29
// ///////////////////////////////////////////////////////
#include <iostream>

int main(void)
{
    using namespace std;

    double invest_Daphne;
    cout << "Please input invest_Daphne: ";
    cin >> invest_Daphne;
    double inveset_Cleo;
    cout << "Please input invest_Cleo: ";
    cin >> inveset_Cleo;

    double value_Daphne (0);
    double value_Cleo = inveset_Cleo;
    int year = 0;
    do
    {
        year++;
        // Daphne's invest value
        value_Daphne += 0.1 * invest_Daphne;
        // Cleo's invest value
        value_Cleo *= (1 + 0.05);
        cout << year << ": " << "value_Daphne = " << value_Daphne << " value_Cleo = " << value_Cleo - inveset_Cleo << endl;
    }while(value_Cleo - inveset_Cleo <= value_Daphne);

    // 输出结果
    cout << "After " << year << " years later:" << endl;
    cout << "Cleo's invest value is " << value_Daphne << endl;
    cout << "Daphne's invest value is " << value_Cleo - inveset_Cleo << endl;

    return 0;
}
