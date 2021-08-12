#include <iostream>

using namespace std;

int main()
{
    int s, k;
    s = 0;
    k = 0;

    while (s<1024)
    {
        s = s+10;
        k = k+1;
    }
    cout << "s=" << s << " k=" << k << endl;

    return 0;
}
