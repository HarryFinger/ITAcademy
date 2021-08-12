#include <iostream>
#include <string>

using namespace std;

int main()
{
    string A;
    cout << "Enter the string:" << endl;
    cin >> A;
    int counter = 0;
    for(int i =0; i< A.length(); i++)
    {
        if (A[i] >= '0' && A[i] <= '9')
        {
            counter++;
        }
    }
    cout<< "Amount of numbers: " << counter << endl;
    return 0;
}
