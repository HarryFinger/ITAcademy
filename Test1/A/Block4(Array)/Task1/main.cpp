#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int k = 0;
    int* pA = new int[5];
    for (int i = 0; i<5 ;i++)
    {
        cin >> pA[i];
    }

    for (int i = 0; i<5 ;i++)
    {
        if (abs(pA[i]%10)==8  && pA[i]%3==0)
        {
            k++;
        }
    }
    cout << "Count of elements: " << k;
    return 0;
}
