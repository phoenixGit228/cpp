// ///////////////////////////////////////////////////////
// 名称: nested.cpp
// 描述: nested loops and 2-D array
// 日期: 2021-11-26 18:52:59
// ///////////////////////////////////////////////////////
#include <iostream>
#include <string>
const int Cities = 5;
const int Years = 4;
int main()
{
    using namespace std;

    // const char *cities[Cities] =     // 使用指针数组
    // const char cities[Cities][25] =     // 使用字符串数组
    const string cities[Cities] = // 使用string类
        {
            "Gribble City",
            "Ggribbletown",
            "New Gribble",
            "San Gribble",
            "Gribble Vista"};

    int maxtemps[Years][Cities] =
        {
            {96, 100, 87, 101, 105},
            {96, 98, 91, 107, 104},
            {97, 101, 93, 108, 107},
            {98, 103, 95, 109, 108}};
    cout << "Maxium temperatures for 2008 - 2011\n\n";
    for (int city = 0; city < Cities; ++city)
    {
        cout << cities[city] << ":\t";
        for (int year = 0; year < Years; ++year)
            cout << maxtemps[year][city] << "\t";
        cout << endl;
    }
    // cin.get()
    return 0;
}
