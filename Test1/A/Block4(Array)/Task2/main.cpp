#include <iostream>
#include <ctime>


using namespace std;

void sort(int*);

int main()
{
    srand(time(0));

    int* pA = new int[20];

    for (int i = 0; i < 20; i++)
    {
        pA[i] = rand()%900 + 100;
    }

    sort (pA);

    for (int i = 0; i < 20 ; i++)
    {
        cout << pA[i] << endl;
    }
    return 0;
}

void sort(int* pA)
{
    int x;
    for (int i = 0; i<19;)
    {
        if ((pA[i]/10)%10 > (pA[i+1]/10)%10)
        {
            x = pA[i];
            pA[i] = pA[i+1];
            pA[i+1] = x;
            i=0;
        }
        else
        {
            i++;
        }
    }
}
