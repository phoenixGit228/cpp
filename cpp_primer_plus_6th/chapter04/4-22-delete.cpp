// ///////////////////////////////////////////////////////
// 名称: delete.cpp
// 描述: using the delete operator
// 日期: 2021-06-02 23:07:23
// ///////////////////////////////////////////////////////
#include <iostream>
#include <cstring>      //or string.h
using namespace std;
char * getname(void);   //函数声明
struct antarctica_years_end
{
    int year;
    /* some really interesting data, etc. */
};
int main(void)
{
    // char * name;        // create pointer but no storage
    // name = getname();   // assign address of string to name
    // cout << name << " at " << (int*)name << "\n";
    // delete [] name;     // memory freed

    // name = getname();   // assign address of string to name
    // cout << name << " at " << (int *)name << "\n";
    // delete [] name;     // memory freed again

    antarctica_years_end s01, s02, s03;     // s01, s02, s03 are structures
    s01.year = 1998;
    antarctica_years_end * pa = &s02;
    pa->year = 1999;
    antarctica_years_end trio[3];       // array of 3 structures
    trio[0].year = 2003;
    (trio+1)->year = 2004;
    const antarctica_years_end * arp[3] = {&s01, &s02, &s03};
    cout << arp[1]->year << endl;
    const antarctica_years_end ** ppa = arp;
    cout << (*ppa)->year << endl;
    cout << (*(ppa +1))->year << endl;
    auto ppb = arp;
    cout << (*(ppb + 1))->year << endl;

    // cout << *(*ppa +1) << endl;
    
    return 0;
}
char * getname()        // return pointer to new string
{
    char temp[80];      // temporary storage
    cout << "Enter last name: ";
    cin >> temp;
    char * pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);   // copy string into smaller space

    return pn;          // temp lost when function ends
}