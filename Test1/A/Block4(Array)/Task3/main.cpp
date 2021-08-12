#include <iostream>
#include <ctime>

using namespace std;

void foo(int*);

int main()
{
    srand(time(0));
    int* pA = new int[10];

    for(int i = 0; i<10 ;i++)
    {
        pA[i] = rand()%1001;
    }

    cout << "Array:" << endl;

    for(int i = 0; i<10 ;i++)
    {
        cout << pA[i] << endl;
    }

    cout << "Elements equal to their last number:" << endl;

    foo(pA);

    return 0;
}

void foo(int* pA)
{
    int counter = 0;
    for(int i = 0; i<10 ;i++)
    {
        if (i == pA[i]%10)
        {
            cout << "Element: " << pA[i] << ", his number : "<< i << endl;
            counter++;
        }
    }
    if (counter == 0) cout << "No such elements!" << endl;
}
