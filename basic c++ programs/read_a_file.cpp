#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
int main(int argc, const char **argv)
{
    string filename;
    string readfile;
    cout << "Welcome to the file reading operation" << endl;
    cout << "\nEnter the name of the file to be read with proper extension: ";
    cin >> filename;
    ifstream infile;
    infile.open(filename, ios::in);
    if (!infile.fail())
    {
        cout << "Reading the file\n" <<endl;
        while (infile >> readfile)
        {
            cout << readfile << endl;
        }
        infile.close();
    }
    else
    {
        cout << "File does not exist\n";
    }
    return 0;
}