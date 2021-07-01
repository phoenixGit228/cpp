// ///////////////////////////////////////////////////////
//
// 名称: chapter 3 复习题
// 描述: 
// 日期: 2021-03-20 16:28:27
//
// ///////////////////////////////////////////////////////
#include <iostream>
#include <typeinfo>
#include <climits>

int main(void)
{
    using namespace std;
    long long number{3000000000};
    short k{80};
    cout << "int number a : " << k << endl;
    cout << number << endl;

    // char grade = 65;
    char grade = 'A';
    cout << "char grade: " << grade << " is " << int(grade) << endl;
    char chr = 88;
    cout << "chr is " << chr << endl;
    cout << "chr is " << char(88) << endl;
    cout << "chr is " << (char)88 << endl;
    cout.put(char(88));
    cout << endl;
    cout << 8 * 9 / 2 << endl;
    cout << 6 * 3 / 4 << endl;
    cout << 3 / 4 * 6 << endl;
    cout << 6.0 * 3 / 4 << endl;
    cout << 15 % 4 << endl;

    //类型转换导致的误差
    double x1 = 13.99;
    double x2 = 15.99;
    cout << int(x1) + int(x2) << endl;
    cout << int(x1 + x2) << endl;
    unsigned int pn = 42110;
    cout << pn << endl;
    int input{35};
    cout << input << endl;
    int c = INT_MAX;
    long b = LONG_MAX;
    long long a = LLONG_MAX;
    cout << "int max is " << c << endl;
    cout << "long max is " << b << endl;
    cout << "long long max is " << a << endl;
    //auto声明 类型推断
    // char32_t cars = U'/U00002155';
    // cout << typeid(cars).name() << endl;
    int width = 0;
    while (b > 0)
    {
        width += 1;
        b = b / 10;
    }
    cout << width << endl;
    return 0;
}