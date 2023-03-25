//This program is performed by 22CS051_DARSH
#include <iostream>
using namespace std; 
#define MAX 10 
class student
{
    public:
        char  name[30];
        int   rollNo;
        int   cls;
        char dev[2];
        //member function to get student's details
        void getDetails(void);
        //member function to print student's details
        void putDetails(void);
};
void student::getDetails()
{
    cout<< "Enter Name  : ";
    cin >> name;
    cout<< "Roll No.    : " ;
    cin >> rollNo;
    cout << "Enter Class : ";
    cin >> cls ;
    cout << "Devision    : ";
    cin >> dev;
}
void student::putDetails()
{
    cout << "Name\t : " << name << endl;
    cout << "Roll No. : " << rollNo << endl;
    cout << "Class \t : " << cls << endl;
    cout << "Devision : " << dev << endl;
}
int main()
{
    int a,b;
    student std[MAX];
    cout << "This program is performed by 22CS051_DARSH" << endl;
    cout << "Enter nubmer of students : ";
    cin>> a;
    for ( b = 0; b< a; b++)
    {
       std[b].getDetails(); 
    }
    cout << endl;
    for ( b = 0; b< a; b++)
    {
       std[b].putDetails(); 
    }
    cout << endl;    
}