// ///////////////////////////////////////////////////////
// 名称: p4-13-5.cpp
// 描述: 命名初始化结构体
// 日期: 2021-07-05 11:00:57
// ///////////////////////////////////////////////////////
#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
    // char band[80];
    string band;
    float weight;
    int calorie;
};
int main(void)
{

    const int SIZE = 3;         // 数组长度
    const int Char_Size = 80;   // 字符长度
    CandyBar *snack = new CandyBar[SIZE];
    // CandyBar snack[3] =
    // {
    //     {"Mocha Monch", 2.3, 250},
    //     {"chocolate", 3.6, 400},
    //     {"Big White Rabbit", 5.7, 200}
    // };
    cout << "Please input the snack[0]'s band: ";
    // cin.get(snack[0].band,Char_Size);
    getline(cin, snack[0].band);
    cout << "Please input the snack[0]'s weight: ";
    cin >> snack->weight;
    cout << "Please input the snack[0]'s calorie: ";
    cin >> (*snack).calorie;

    cin.get();  //获取输入流cin中最后的回车符
    cout << "Please input the snack[1]'s band: ";
    getline(cin, snack[1].band);
    //类型是char数组，只能使用cin.get();
    //如果类型为string，则可以使用getline(cin,变量名)
    // cin.get(snack[1].band,Char_Size);
    cout << "Please input the snack[1]'s weight: ";
    cin >> (snack+1)->weight;
    cout << "Please input the snack[1]'s calorie: ";
    cin >> (*(snack+1)).calorie;


    cout << "The snack[0]'s band is: " << snack[0].band << endl;
    cout << "The snack[0]'s weight is: " << snack->weight << endl;
    cout << "The snack[0]'s calorie are:" << snack[0].calorie << endl;
    cout << "The snack[1]'s band is: " << snack[1].band << endl;
    cout << "The snack[1]'s weight is: " << (snack+1)->weight << endl;
    cout << "The snack[1]'s calorie are: " << snack[1].calorie << endl;

    delete [] snack;

    return 0;
}
