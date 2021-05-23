#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, const char **argv)
{
    srand(time(0));
    cout << "Welcome to the dice game\n";
    cout << "Your dice number is: ";
    cout << (rand() % 6) + 1 << endl;
    return 0;
}