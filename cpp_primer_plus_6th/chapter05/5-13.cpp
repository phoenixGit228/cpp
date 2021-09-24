// ///////////////////////////////////////////////////////
// 名称: while.cpp
// 描述: introducing the while loop
// 日期: 2021-09-01 22:45:38
// ///////////////////////////////////////////////////////
#include <iostream>
const int ArSize = 20;
int main()
{
    using namespace std;
    char name[ArSize];
    cout << "Your first name, please: ";
    cin >> name;
    cout << "Here is your name, Verticalized and ASCIIized:\n";
    int i = 0;              // start at begining of string
    // while(name[i] != '\0')  // process to end of string
    while(name[i])  // process to end of string
    // {
    {
        cout << name[i] << ": " << int(name[i]) << endl;
        i++;                // don't forget this step
    }
    return 0;
}
