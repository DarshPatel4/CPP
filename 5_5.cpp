//This program is performed by 22CS051_DARSH
#include <iostream>
#include <string>
using namespace std;
class Gate {
    int RegNo;
    string name;
    string ExamCenter;
    static int ECV_Cnt, ECS_Cnt, ECA_Cnt; // Static member variables to count students in different exam centers
public:
    void getdata() {
        cout << "Enter registration number: ";
        cin >> RegNo;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter exam center(Vadodara/Surat/Ahmedabad): ";
        cin >> ExamCenter;
        if (ExamCenter == "Vadodara")
            ECV_Cnt++; // Increment Vadodara count if student chooses Vadodara as exam center
        else if (ExamCenter == "Surat")
            ECS_Cnt++; // Increment Surat count if student chooses Surat as exam center
        else if (ExamCenter == "Ahmedabad")
            ECA_Cnt++; // Increment Ahmedabad count if student chooses Ahmedabad as exam center
    }
    void putdata() {
        cout << "Registration number: " << RegNo << endl;
        cout << "Name: " << name << endl;
        cout << "Exam center: " << ExamCenter << endl;
    }
    static void getcount() {
        cout << "Total number of students in Vadodara: " << ECV_Cnt << endl;
        cout << "Total number of students in Surat: " << ECS_Cnt << endl;
        cout << "Total number of students in Ahmedabad: " << ECA_Cnt << endl;
    }
};
// Initializing static member variables to zero
int Gate::ECV_Cnt = 0;
int Gate::ECS_Cnt = 0;
int Gate::ECA_Cnt = 0;
int main() {
    const int NumStudents = 5;
    Gate students[NumStudents];
    for (int i = 0; i < NumStudents; i++) {
        cout << "Enter details of student " << i + 1 << ":" << endl;
        students[i].getdata(); // Get student details from user
        cout << endl;
    }
    cout << "Details of all students:" << endl;
    for (int i = 0; i < NumStudents; i++) {
        students[i].putdata(); // Display student details
        cout << endl;
    }
    Gate::getcount(); // Display total count of students in different exam centers
    return 0;
}