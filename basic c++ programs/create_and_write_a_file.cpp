#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, const char **argv)
{
    string name;
    string filename;
    int age, condition;
    do
    {
        system("clear");
        cout << "Welcome to the text file creating operation\n";
        cout << "\nEnter your file name with proper extension: ";
        cin >> filename;
        cin.ignore();
        ofstream outfile;
        outfile.open(filename);
        cout << "Text file is created successfully !\n";
        cout << "\nEnter your name: ";
        getline(cin, name);
        cout << "Enter your age: ";
        cin >> age;
        cin.ignore();
        outfile << "Name: " << name << endl;
        outfile << "Age : " << age << endl;
        outfile.close();
        cout << "\nIf you want to continue enter '1' else '0'\n";
        cin >> condition;
        cin.ignore();
        if (condition == 0)
        {
            system("clear");
        }
    } while (condition);
    return 0;
}
