#include <iostream>

using namespace std;

int main()
{
    int a;
    bool flag = true;
    cout << "Enter number: ";
    cin >> a;

    while (a != 0)
    {
        if (a%2 != 0)
        {
            flag = false;
            break;
        }
        a = a/10;
    }

    if (flag == true) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
