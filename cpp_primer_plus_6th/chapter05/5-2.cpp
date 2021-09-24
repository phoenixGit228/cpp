// ///////////////////////////////////////////////////////
// 名称: num_test.cpp
// 描述: use numeric test in for loop
// 日期: 2021-07-18 21:53:26
// ///////////////////////////////////////////////////////
#include <iostream>
int main(void)
{
    using namespace std;
    int limit;
    do{
        cout << "Enter the starting positive number: ";
        cin >> limit;
    }while (limit < 0);

    int i;
    for (i = limit; i; i--)  //quits when i is 0
        cout << "i = " << i << endl;
    cout << "Done now that i = " << i << endl;
    return 0;
}
