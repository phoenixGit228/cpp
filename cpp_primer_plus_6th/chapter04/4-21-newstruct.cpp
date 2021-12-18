// ///////////////////////////////////////////////////////
// 名称: newstruct.cpp
// 描述: using new with a structure
// 日期: 2021-06-02 22:46:13
// ///////////////////////////////////////////////////////
#include <iostream>
struct inflatable  // structrue definition
{
    char name[20];
    float volume;
    double price;
};
struct things
{
    int good;
    int bad;
};
int main()
{
    using namespace std;
    inflatable * ps = new inflatable;       // allot memory for structure
    cout << "Enter name of inflatable item: ";
    cin.get(ps->name, 20);      // method 1 for member access
    cout << "Enter volume in cubic feet: ";
    cin >> (*ps).volume;        // method 2 for member access
    cout << "Enter price: $";
    cin >> ps->price;
    cout << "Nmae: " << (*ps).name << endl;     // method 1
    cout << "Volume: " << ps->volume << " cubic feet\n";    // method 2
    cout << "Price: $" << ps -> price << endl;      // method 3
    delete ps;      //free memory

    things grubnose = {3,453};
    things *pt = &grubnose;     
    // 这里指针pt 不是new创建的，属于自动分配，不能使用delete进行删除
    cout << "grubnose.good: " << pt->good << endl;
    cout << "grubnose.good: " << (*pt).good << endl;
    cout << "grubnose.bad: " << grubnose.bad << endl;   // method 1
    cout << "grubnose.bad: " << (*pt).bad << endl;      // method 2
    cout << "grubnose.bad: " << pt->bad << endl;        // method 3
    return 0;
}