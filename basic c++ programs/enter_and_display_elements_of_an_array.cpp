#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, const char **argv)
{
    int *p;
    int n;
    int condition;
    do{
    system("clear");
    cout << "Enter the number of elements to be stored: \n";
    cin >> n;
    p = (int *)malloc(n * sizeof(int));
    cout << "Enter the values of an array: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    cout <<"\nDisplaying the numbers stored in an array:\n";
    for (int i = 0; i < n; i++)
    {
        if (i==0 && n==1){
        cout << *p <<" ";
        *p++;
        }
        else if(i==(n-1)){
            cout << *p <<" ";
            *p++;
        }
        else if(n>1){
            cout << *p <<","<<" ";
            *p++;
        }
    }
    cout << endl;
    cout <<"\nIf you want to continue enter '1' else '0'\n";
    cin >> condition;
    if (condition ==0){
        system("clear");
    }
    }while(condition);
    return 0;
}