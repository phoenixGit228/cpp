// ///////////////////////////////////////////////////////
// 描述: using if else if else
// 日期: 2022-02-12 16:21:42
// ///////////////////////////////////////////////////////
#include <iostream>
const int Fave = 27;
int main()
{
    using namespace std;
    int n;

    cout << "Enter a number in the range 1-100 fo find ";
    cout << "my favorite number: ";
    do
    {
        cin >> n;
        if (n < Fave)
            cout << "Too low -- guess again: ";
        else if (n > Fave)
            cout << "Too high -- guess again: ";
        else
            cout << Fave << " is right!\n";
    }while(n != Fave);

    // int myNumber;
    // cin >> myNumber;
    // cout << "Enter a number in the range 1-10 fo find ";
    // cout << "my favorite number: ";

    // if (3 == myNumber)
    //     cout << "You are right!" << endl;
    // cout << "myNumber = " << myNumber << endl;

    return 0;
}
