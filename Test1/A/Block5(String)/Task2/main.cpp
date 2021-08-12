#include <iostream>
#include <string>

using namespace std;

int main()
{
    string A;
    cout << "Enter the string:" << "\n";
    getline(cin,A);
    int counter =1;

    for (int i =0; i < A.length(); i++)
    {
        if (A[i] == ' ')
        {
            counter++;
        }
    }

    cout << "There are " << counter << " words in a line."<< endl;
    return 0;
}
