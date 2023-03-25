//This program is performed by 22CS051_DARSH
#include <iostream>
#include <string>
using namespace std;
class Gate {
    int RegNo;//private data
    string name;//private data
    string ExamCenter;//private data
    static int ECV_Cnt,ECS_Cnt,ECA_Cnt;//private data
public:
    void getdata() {
        cout << "Enter registration number: ";
        cin >> RegNo;//registration number
        cout << "Enter name: ";
        cin >> name;//Name
        cout << "Enter exam center(Vadodara/Surat/Ahmedabad) : ";
        cin >> ExamCenter;//exam center
        if (ExamCenter == "Vadodara")
            ECV_Cnt++;
        else if (ExamCenter == "Surat")
            ECS_Cnt++;
        else if (ExamCenter == "Ahmedabad")
            ECA_Cnt++;
    }
    void putdata()//function for putting data 
    {
        cout << "Registration number: " << RegNo << endl;
        cout << "Name: " << name << endl;
        cout << "Exam center: " << ExamCenter << endl;
    }
    static void getcount() {//function for counting data
        cout << "Total number of students in Vadodara: " << ECV_Cnt << endl;
        cout << "Total number of students in Surat: " << ECS_Cnt << endl;
        cout << "Total number of students in Ahmedabad: " << ECA_Cnt << endl;
    }
};
int Gate::ECV_Cnt = 0;
int Gate::ECS_Cnt = 0;
int Gate::ECA_Cnt = 0;
int main() {
    const int NumStudents = 5;
    Gate students[NumStudents];
    for (int i = 0; i < NumStudents; i++) {
        cout << "Enter details of student " << i+1 << ":" << endl;
        students[i].getdata();
        cout << endl;
    }
    cout << "Details of all students:" << endl;
    for (int i = 0; i < NumStudents; i++) {
        students[i].putdata();
        cout << endl;
    }
    Gate::getcount();
    return 0;
}               