#include <iostream>
int main()
{
    using namespace std;
    int x = 20;                 // original x
    {                           // block stars
        cout << x << endl;      // use original x
        int x = 100;            // new x
        cout << x << endl;      // use new x
    }
    cout << x << endl;          // use original
    return 0;
}
