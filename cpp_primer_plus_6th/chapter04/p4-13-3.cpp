// ///////////////////////////////////////////////////////
// 名称: p4-13-3.cpp
// 描述: 使用cstring中函数拼接字符串
// 日期: 2021-07-05 10:43:23
// ///////////////////////////////////////////////////////
#include <iostream>
#include <cstring>
const int ArSize = 80;
int main(void)
{
    using namespace std;
    
    char first_name[ArSize],last_name[ArSize];
    char full_name[ArSize*2+1];
    cout << "Enter your first name: ";
    cin.getline(first_name, ArSize);
    cout << "Enter your last name: ";
    cin.get(last_name, ArSize).get();
    cout << "first name: " << first_name << endl;
    cout << "last name: " << last_name << endl;
    strcpy(full_name, last_name);
    strcat(full_name, ", ");
    strcat(full_name, first_name);
    cout << "Here's the information in a single string: " << full_name << endl;

    return 0;
}
