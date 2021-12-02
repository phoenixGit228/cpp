// ///////////////////////////////////////////////////////
// 名称: p5-9-1.cpp
// 描述:
// 日期: 2021-12-02 13:14:35
// ///////////////////////////////////////////////////////

#include <iostream>
#include <array>
const int Arsize = 100; // example of external declaration
using namespace std;
int main(void)
{
    // long long factorials[Arsize];
    // factorials[1] = factorials[0] = 1LL;
    // for (int i = 2; i < Arsize; i++)
    //     factorials[i] = i * factorials[i - 1];
    // for (int i = 0; i < Arsize; i++)
    //     std::cout << i << "!= " << factorials[i] << std::endl;

    array<long double, Arsize> factor;
    factor[1] = factor[0] = 1.0;
    for (int i = 2; i < Arsize+1; i++)
        factor[i] = i * factor[i-1];
    for (int i = 0; i < Arsize+1; i++)
        cout << i << "!= " << factor[i] << endl;


    return 0;
}
