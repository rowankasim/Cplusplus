#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void primenumber(int number);
int count,condition,number;
int main(int argc, const char** argv) {
    do{
    system("clear");
    cout << "Prime Number Calculator"<<endl;
    cout << "Enter the number: ";
    cin >>number;
    if((number==1)||(number==0)){
        cout << "\n" <<number <<" is neither prime nor composite number\n ";
    }
    else{
        primenumber(number);
    }
    cout << "\nIf you want to continue press '1' else '0'\n";
    cin>> condition;
    if(condition==0){
        system("clear");
    }
    else if(condition>=1){
        count=0;
    }
    }while(condition);
    return 0;
}

void primenumber(int number){
    
    for (int i = 1; i <= number; i++){
        if(number%i==0){
            count++;
        }
    }
    if(count==2){
        cout << "\nThe given number is a primenumber\n";
    }
    else{
        cout << "\nThe given number is not a primenumber\n";
    }
}