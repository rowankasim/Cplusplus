// By default, the visibility of class is 'private'.
#include <iostream>
#include <cstdlib>
using namespace std;

class player
{
public:
    string name;
    int jersey_no;
    string role;
};

int main(int argc, const char **argv)
{
    player player1;
    player1.name = "Virat Kohli";
    player1.jersey_no = 18;
    player1.role = "Captain";
    player player2;
    player2.name = "Rohit Sharma";
    player2.jersey_no = 45;
    player2.role = "Vice-Captain";
    system("clear");
    cout << "Name       :" << player1.name << endl;
    cout << "Jersey No  : " << player1.jersey_no << endl;
    cout << "Role       :" << player1.role << endl;
    cout << "\nName       :" << player2.name << endl;
    cout << "Jersey No  : " << player2.jersey_no << endl;
    cout << "Role       :" << player2.role << endl;
    return 0;
}