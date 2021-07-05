// ///////////////////////////////////////////////////////
// 名称: p4-13-3.cpp
// 描述: 使用cstring中函数拼接字符串
// 日期: 2021-07-05 10:43:23
// ///////////////////////////////////////////////////////
#include <iostream>
#include <cstring>
int main(void)
{
    using namespace std;
    
    const int ArSize = 80;
    char first_name[ArSize];
    char last_name[ArSize];
    cout << "Enter your first name: ";
    cin.getline(first_name, ArSize);
    cout << "Enter your last name: ";
    cin.get(last_name, ArSize).get();
    cout << "first name: " << first_name << endl;
    cout << "last name: " << last_name << endl;
    strcpy(last_name, ", ");
    cout << last_name << endl;
    strcpy(last_name, first_name);
    cout << "Here's the information in a single string: " << last_name << endl;

    return 0;
}
