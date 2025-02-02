#include <iostream>
using namespace std;
int *roll = new int;
char *name = new char;
void area( int length , int breadth=9)
void scanRollandName()
{
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter the roll number: ";
    cin >> *roll;
}
void freeMemory()
{
    delete roll;
    delete[] name;
}
void printRollandName()
{
    cout << endl
         << "Name: " << name;
    cout << endl
         << "Roll No.: " << *roll;
}
int main()
{
    scanRollandName();
    cout << endl
         << "Memory allocated dynamically for name and roll.";
    cout << endl
         << "Value of Name and roll before Deallocation";
    printRollandName();
    freeMemory();
    cout << "\n\nAfter Deallocation: ";
    printRollandName();
    return 0;
}
