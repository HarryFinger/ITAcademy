#include <iostream>
#include <string>

using namespace std;

void del(const string&, string&);

int main()
{
    string A,B;

    cout << "Enter the string:" << endl;
    getline(cin,A);

    del(A, B);

    cout << B << endl;

    return 0;
}

void del(const string& A, string& B)
{
    for(int i = 0; i < A.length(); i++)
    {
        if (A[i] != '<' && A[i] != '>')
        {
            B.push_back(A[i]);
        }
    }
}
