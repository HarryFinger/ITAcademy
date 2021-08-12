#include <iostream>

using namespace std;

int fun(int);

int main()
{
    cout << fun(123456);

    return 0;
}
    int fun(int x)
    {

        int s = 0;
        for (int i = 1; i<3; i++)
        {
            s = s + x%10;
            x = x/10;
        }
        return s;
    }
