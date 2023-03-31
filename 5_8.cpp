#include<iostream>
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
}