#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void odd_even(int number);

int main(int argc, const char **argv)
{
    cout << "Welcome to the Odd or Even calculator\n";
    int number;
    cout << "Enter the number: \n";
    cin >> number;
    odd_even(number);
    return 0;
}

void odd_even(int number)
{
    if (number % 2 == 0)
    {
        cout << "The entered number " << number << " is an Even Number" << endl;
    }
    else
    {
        cout << "The entered number " << number << " is an Odd Number" << endl;
    }
}