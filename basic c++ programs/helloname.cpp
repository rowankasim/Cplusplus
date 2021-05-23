#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "Please enter your name: " << endl;
    getline(cin, name);
    cout << "Hello, " << name << endl;
}
