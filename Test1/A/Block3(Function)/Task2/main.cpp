#include <iostream>

using namespace std;

void calc(int, int);

int main()
{
    int N, x;
    cout << "Enter number: ";
    cin >> N;
    cout << "Enter number system: ";
    cin >> x;

    calc(N, x);

    return 0;
}

void calc(int N, int x)
{
    if (N/x != 0)
    {
        calc(N/n, x);
    }
        cout << N%x;
}
