// ///////////////////////////////////////////////////////
//
// 名称: BMI.cpp
// 描述: 输入身高，体重，计算BMI
// 日期: 2021-03-24 21:36:22
//
// ///////////////////////////////////////////////////////
#include <iostream>
#include <cmath>

int main(void)
{
    using namespace std;

    int feet, inch;
    cout << "请输入你的身高，以_____英尺_____英寸为单位输入：";
    cin >> feet;
    cin >> inch;
    cout << "你的身高为：" << feet << "英尺" << inch << " 英寸" << endl;

    cout << "请输入你的体重（以磅为单位）：";
    double lbs;
    cin >> lbs;
    cout << "你的体重为：" << lbs << " 磅" << endl;

    const double INCH_TO_METER = 0.0254;
    const double KG_TO_LBS = 2.2;

    double BMI = pow((feet * 12.0 + inch)*INCH_TO_METER,2.0);
    BMI = lbs * KG_TO_LBS / BMI;
    cout << "你的BMI指数为：" << BMI << endl;
    return 0;
}