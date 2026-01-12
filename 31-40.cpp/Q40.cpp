//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
#include <iostream>
using namespace std;

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    Student s;

    cout << "Enter Roll Number: ";
    cin >> s.roll;

    cin.ignore(); // clear buffer
    cout << "Enter Name: ";
    cin.getline(s.name, 50);

    cout << "Enter Marks: ";
    cin >> s.marks;

    cout << "\n--- Student Details ---\n";
    cout << "Roll No: " << s.roll << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;

    return 0;
}
