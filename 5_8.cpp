/*#include<iostream>
using namespace std;
class Parent;
class Child {
    string name;
    char gender;
public:
    void GetData() {
        cout << "Enter name of child: ";
        cin >> name;
        cout << "Enter gender of child (M/F): ";
        cin >> gender;
    }
    void PrintData() {
        cout << "Name of child: " << name << endl;
        cout << "Gender of child: " << gender << endl;
        cout << "This program is performed by 22CS051_DARSH" << endl;
    }
};
class Parent{
friend class child;
public:
    void ReadChildData(Child &c);
    void DisplayChildData(Child c);
};

void Parent::ReadChildData(Child c) {
    c.GetData();
}

void Parent::DisplayChildData(Child c) {
    c.PrintData();
}

int main() {
    Child c;
    Parent p;

    p.ReadChildData(c);
    p.DisplayChildData(c);

    return 0;
}*/
//This program is performed by 22CS051_DARSH
#include<iostream>
using namespace std;
// Class definition for child
class child {
public:
    string name;
    string gender;
    // Method to get child data from user
    void get() {
        cout << "Enter child name: ";
        cin >> name;
        cout << "Enter child gender: ";
        cin >> gender;
    }
    // Declaration of parent class as friend to access private members
    friend class parent;
} c;
// Class definition for parent
class parent {
public:
    // Method to read child data
    void readchilddata(child &c) {
        cout << "Enter child name: ";
        cin >> c.name;
        cout << "Enter child gender: ";
        cin >> c.gender;
    }
    // Method to display child data
    void displaychilddata(child c) {
        cout << "Child name: " << c.name << endl;
        cout << "Child gender: " << c.gender << endl;
    }
} p;
int main() {
    p.readchilddata(c); // Input child data using parent's method
    p.displaychilddata(c); // Display child data using parent's method
    cout << "This program is performed by 22CS051_DARSH" << endl;
    return 0;
}

