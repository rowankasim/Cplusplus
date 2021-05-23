#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, const char** argv) {
    int num1,num2,condition;
    do{
    system("clear");
    cout<<"Enter the numbers to be displayed\n";
    cout<<"Beginning Number: ";
    cin>>num1;
    cout<<"Ending Number: ";
    cin>>num2;
    if(num1<num2){
    while(num1<=num2){
        for(num1;num1<=num2;num1++){
            cout<<num1<<endl;
        }
    }
    }
    else if(num1==num2){
        cout<<"\nKindly enter proper input\n";
    }
    else if(num1>num2){
        cout<<"\nKindly enter proper input\n";
    }
    cout<<"\nIf you want to continue enter '1' else '0'\n";
    cin>>condition;
    if(condition==0){
        system("clear");
    }
    }while(condition);
    return 0;
}