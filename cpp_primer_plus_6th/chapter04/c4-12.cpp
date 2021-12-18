// ///////////////////////////////////////////////////////
// 名称: 复习题
// 描述:
// 日期: 2021-06-11 17:08:49
// ///////////////////////////////////////////////////////
#include <array>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// problem 8
struct fishes
{
    string name;
    int weight;   // 盎司
    float length; // 英寸
};
int main()
{

    // problem 1
    char actor[30];
    short betsie[100];
    float chuck[13];
    long double dipsea[64];

    // problem 2
    array<char, 30> actor_2;
    array<short, 100> betsie_2;
    array<float, 13> chuck_2;
    array<long double, 64> dipsea_2;

    // problem 3
    int arr[5] = {1, 3, 5, 7, 9};
    int even = arr[0] + arr[4];

    // problem 4
    even = *arr + *(arr + 4);
    cout << "arr[0] + arr[4] = " << even << endl;

    // problem 5
    float ideas[5] = {1, 2, 3, 4, 5};
    cout << "ideas[1] = " << ideas[1] << endl;

    // problem 6 , 这里推荐第一种，由初始化自动分配
    char characters[] = "cheeseburger";
    //char characters[20] = "cheeseburger"; //传统C风格，字符数组，需带上数组长度

    // problem 7
    string st = "WaldorfSalad"; // string类型，自动匹配字符数组长度

    // problem 9
    fishes fish = {"Bigfish", 3, 6.5};

    // problem 10
    enum Response
    {
        Yes = 1,
        No = 0,
        Maybe = 2
    }; // 枚举，创建类型，不需要 "="

    // enum Response { No, Yes, Maybe   }; 


    // problem 11
    double ted = 10.0;
    double *pt = &ted; // 指针
    cout << "The ted = " << ted << endl;
    cout << "The ted = " << *pt << endl;

    // problem 12
    float treacle[10] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    float *px = treacle; 
    // 或者使用以下语句
    // float *px = &treacle[0]; // 指针数组，必须指向首元素地址
    cout << "treacle[0] = " << *px << endl;
    cout << "treacle[9] = " << *(px + 9) << endl;

    // problem 13
    unsigned int m;
    cout << "Please enter a number: ";
    cin >> m;
    int *pt1 = new int[m]; // 动态创建指针数组
    delete[] pt1;
    vector<int> zhengshu(m);

    // problem 14
    cout << (char *)"Home of the jolly bytes." << endl;
    cout << (int *)"Home of the jolly bytes." << endl;

    // problem 15
    fishes *fish_a = new fishes;
    (*fish_a).name = "Goldenfish";
    fish_a->length = 3.2f;
    (*fish_a).weight = 3;
    cout << "fish_a:name = " << (*fish_a).name << endl;
    cout << "fish_a:length = " << fish_a->length << endl;

    // problem 16
    // 中间如果出现空格，后面的将会丢弃
    // cin.getline(address, 80);

    // problem 17
    const int N = 10;
    vector<string> str1(N);
    array<string, N> str2;

    return 0;
}
