// ///////////////////////////////////////////////////////
// 名称: formore.cpp
// 描述: more looping with for
// 日期: 2021-08-04 21:32:41
// ///////////////////////////////////////////////////////
#include <iostream>
const int Arsize = 16;      // example of external declaration
int main(void)
{
    long long factorials[Arsize];
    factorials[1] = factorials[0] = 1LL;
    for (int i =2; i < Arsize; i++)
        factorials[i] = i * factorials[i -1];
    for (int i =0; i< Arsize; i++)
        std::cout << i << "!= " << factorials[i] << std::endl;
    
    return 0;
}
