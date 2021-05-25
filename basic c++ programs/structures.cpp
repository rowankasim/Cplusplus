//structure is a user - defined data type in C / C++.
//By default, the visibility of structure is 'public'
#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
void printStudent(struct student);
struct student
{
    string name;
    int age;
    float cgpa;
};

int main(int argc, const char **argv)
{
    string name1, name2;
    int age1, age2;
    float cgpa1, cgpa2;
    student student1;
    student student2;
    cout << "Enter name of the student 1: ";
    getline(cin, name1);
    student1.name = name1;
    cout << "Enter age of the student 1: ";
    cin >> age1;
    student1.age = age1;
    cout << "Enter cgpa of the student 1: ";
    cin >> cgpa1;
    cin.ignore();
    student1.cgpa = cgpa1;
    cout << "\nEnter name of the student 2: ";
    getline(cin, name2);
    student2.name = name2;
    cout << "Enter age of the student 2: ";
    cin >> age2;
    student2.age = age2;
    cout << "Enter cgpa of the student 2: ";
    cin >> cgpa2;
    student2.cgpa = cgpa2;
    system("clear");
    cout << "Displaying the students detail: " << endl;
    printStudent(student1);
    cout << "\n";
    printStudent(student2);
    return 0;
}

void printStudent(struct student student)
{
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "CGPA: " << student.cgpa << endl;
}
