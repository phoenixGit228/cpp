// ///////////////////////////////////////////////////////
// 名称: mixtypes.cpp
// 描述: some type combinations
// 日期: 2021-06-03 00:09:23
// ///////////////////////////////////////////////////////
#include <iostream>

struct antarctica_years_end
{
    int years;
    // some really interesting data, etc.
};
int main(void)
{
    using namespace std;
    antarctica_years_end s01, s02, s03;
    s01.years = 1998;
    antarctica_years_end * pa = &s02;
    pa->years = 1999;
    antarctica_years_end trio[3];
    trio[0].years = 2003;
    cout << "trio[0]: " << trio->years << endl;
    const antarctica_years_end * arp[3] = {&s01, &s02, &s03};
    cout << "s02: " << arp[1]->years << endl;
    const antarctica_years_end ** ppa = arp;
    auto ppb = arp;
    cout << "arp[0]: "<<(*ppa)->years << endl;
    cout << "arp[1]: "<< (*(ppa + 1))->years << endl;
    cout << "arp[0]: " << (*(ppb +1))->years << endl;

    const antarctica_years_end tap[3] = {s01, s02, s03};
    cout << tap[0].years << endl;
    cout << tap->years << endl;
    // cout << (*(tap +1))->years << endl;
    // cout << (*(tap +2))->years << endl;
    return 0;
}