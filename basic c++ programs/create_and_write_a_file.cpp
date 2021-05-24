#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, const char **argv)
{
    string name;
    string filename;
    int count;
    system("clear");
    cout << "Welcome to the text file creating operation\n";
    cout << "\nEnter your file name with proper extension: ";
    cin >> filename;
    ofstream outfile;
    outfile.open(filename, ios::out);
    if (!outfile.fail())
    {
        cout << "\nText file is created successfully !\n";
    }
    cout << "\nEnter the number of lines to be written: ";
    cin >> count;
    cin.ignore();
    if (count != 0)
    {
        system("clear");
        cout << "\nWrite into your file :\n" << endl;
        for (int i = 1; i <= count; i++)
        {
            cin >> name;
            outfile << name << endl;
        }
        outfile.close();
    }
    else if (count == 0)
    {
        cout << "Inappropirate Input" << endl;
    }

    return 0;
}
