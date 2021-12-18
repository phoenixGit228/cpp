// ///////////////////////////////////////////////////////
//
// 名称: foottoinch.cpp
// 描述: 输入身高英寸，转为英尺输出
// 日期: 2021-03-20 22:39:46
//
// ///////////////////////////////////////////////////////
#include <iostream>

int main(void)
{
    using namespace std;

    cout << "请输入您的身高(整数），以英寸为单位：___________\b\b\b\b\b";
    int height;
    cin >> height;
    const int foot_to_inch{12};
    int foot = height / foot_to_inch;
    int inch = height % foot_to_inch;
    cout << "谢谢，您的身高为：" << foot << " 英尺 " << inch << " 英寸。" << endl;
    return 0;
}