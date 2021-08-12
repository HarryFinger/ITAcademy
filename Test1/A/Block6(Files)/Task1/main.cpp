#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int R,G,B;

    ifstream fin;
    fin.open("Data.txt");

    if(!fin.is_open())
    {
        cout << "Data open ERROR" << endl;
    }
    else
    {
        cout << "Data was written" << endl;
        fin >> R;
        fin >> G;
        fin >> B;
    }

    fin.close();

    ofstream fout;
    fout.open("myFile.txt");

    if(!fout.is_open())
    {
        cout << "myFile open ERROR" << endl;
    }
    else
    {
        fout << "Color code: (" << R << ", " << G << ", " << B << ")" << endl;
        cout << "myFile was written" << endl;
    }

    fout.close();
    return 0;
}
