#include <iostream>
using namespace std;
int main(int argc, const char **argv)
{
    string name;
    cout << "Please enter your name: " << endl;
    getline(cin, name);
    string food;
    cout << "Hello " << name << ", What is your favourite food?" << endl;
    getline(cin, food);
    cout << "Great!, My favourite food is also " << food <<"." << endl;
    return 0;
}