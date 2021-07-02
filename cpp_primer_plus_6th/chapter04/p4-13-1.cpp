// ///////////////////////////////////////////////////////
// 名称: 4.13.cpp
// 描述: 
// 日期: 2021-06-17 09:27:27
// ///////////////////////////////////////////////////////
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    cout << "What is your fist name? ";
    const int ArSize = 80;
    char first_name[ArSize];
    cin.getline(first_name, 80);
    cout << "What is your last name? ";
    char last_name[80];
    cin.get(last_name,80).get();
    cout << "What letter grade do you deserve? ";
    string grade;
    cin >> grade;
    cout << "What is your age? ";
    int age;
    cin >> age;
    cout << "Name: " << last_name << " " << first_name << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;

    return 0;
}
