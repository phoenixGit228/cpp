// ///////////////////////////////////////////////////////
//
// 名称: 2-7-5.cpp
// 描述: 输入摄氏度，输出华氏度
// 日期: 2021-03-13 15:43:44
//
// ///////////////////////////////////////////////////////
#include <iostream>
double celsiustofah(double);
int main(void)
{
    using namespace std;

    cout << "Please enter a Celsius value: ";
    double degree;
    cin >> degree;
    cout << degree << " degrees Celsius is "
         << celsiustofah(degree) << " degrees Fahrenheit." << endl;
    return 0;
}
double celsiustofah(double degree)
{
    return 1.8 * degree + 32.0;
}