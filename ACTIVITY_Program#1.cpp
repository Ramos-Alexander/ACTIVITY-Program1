#include <iostream>
using namespace std;

int main() {
    string name;
    int birthYear;
    const int currentYear = 2025;
    
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your birth year: ";
    cin >> birthYear;
    
    int age = currentYear - birthYear;
    
    cout << "Name: " << name << endl;
    cout << "Age: " << age << " years old" << endl;
    
    return 0;
}

