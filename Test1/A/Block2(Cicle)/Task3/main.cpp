#include <iostream>

using namespace std;

int main()
{
    int *pA = new int[1];
    cin >> *pA;
    int x;
    x = *pA;
    int i = 1;

    for(;;)
    {
        int *pB = new int[i+1];

        for (int j=0; j<i; j++)
        {
            pB[j] = pA[j];
        }

        delete pA;
        pA = pB;
        cin >> x;

        if (x == 0) break;
        else pB[i] = x;

        i++;
    }

    int key, c_key;
    cout << "Enter reference value:";
    cin >> key;
    c_key = 0;
    for (int z = 0; z<i; z++)
    {
        if(pA[z]%10 == 0 && c_key < pA[z] )
        {
            c_key = pA[z];
        }
    }
    if (c_key == 0) cout << "There are no check numbers";
    else
        {
        cout << "Get: " << i << " numbers." << endl;
        cout << "Reference value received: "<< key << endl;
        cout << "Calculated reference value: "<< c_key << endl;
        if (key == c_key) cout << "Control passed" << endl;
        else cout << "Control NOT passed" << endl;
        }
    return 0;
}
