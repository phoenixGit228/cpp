// ///////////////////////////////////////////////////////
// 名称: p5-9-3
// 描述: 用户输入数字，输出累计和，当用户输入0，程序结束
// 日期: 2021-12-02 13:26:42
// ///////////////////////////////////////////////////////
#include <iostream>
int main()
{
    using namespace std;
    int num;
    int sum = 0;
    while(num)
    {
        cin >> num;
        sum += num;
        cout << "Sum = " << sum << endl;
    }
    cout << "Now, the sum is " << sum << endl;
    cout << "中国， 你好"<< endl;
    return 0;
}
