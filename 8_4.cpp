#include <iostream>
#include <string>
using namespace std;
class Hospital
{
    protected:
        int rollNo; // Roll number of the patient
        string name; // Name of the patient
    public:
        void getData()
        {
            cout << "Enter Roll No: ";
            cin >> rollNo;
            cout << "Enter Name: ";
            cin >> name;
        }
        void printData()
        {
            cout << "Roll No: " << rollNo << endl;
            cout << "Name: " << name << endl;
        }
};
class Ward: virtual public Hospital
{
    protected:
        int wardNo; // Ward number where the patient is admitted
    public:
        void getWardData()
        {
            cout << "Enter Ward Number: ";
            cin >> wardNo;
        }
        void printWardData()
        {
            cout << "Ward Number: " << wardNo << endl;
        }
};
class Room: virtual public Hospital
{
    protected:
        int bedNo; // Bed number where the patient is assigned
        string natureOfIllness; // Nature of illness of the patient
    public:
        void getRoomData()
        {
            cout << "Enter Bed Number: ";
            cin >> bedNo;
            cout << "Enter Nature of Illness: ";
            cin >> natureOfIllness;
        }
        void printRoomData()
        {
            cout << "Bed Number: " << bedNo << endl;
            cout << "Nature of Illness: " << natureOfIllness << endl;
        }
};
class Patient: public Ward, public Room
{
    public:
        void getData()
        {
            Hospital::getData(); // Calling the getData() function of the Hospital class to get patient's basic data
            Ward::getWardData(); // Calling the getWardData() function of the Ward class to get ward-related data
            Room::getRoomData(); // Calling the getRoomData() function of the Room class to get room-related data
        }
        void printData()
        {
            Hospital::printData(); // Calling the printData() function of the Hospital class to print patient's basic data
            Ward::printWardData(); // Calling the printWardData() function of the Ward class to print ward-related data
            Room::printRoomData(); // Calling the printRoomData() function of the Room class to print room-related data
        }
};
int main()
{
    Patient p[5]; // Array of 5 Patient objects
    // Getting data for each patient
    for(int i=0;i<5;i++)
    {
        cout << "Enter Patient " << i+1 << " Data: " << endl;
        p[i].getData(); // Calling the getData() function for each patient
    }
    cout << endl << endl;
    cout << "Patient Data: " << endl << endl;
    // Printing data for each patient
    for(int i=0;i<5;i++)
    {
        cout << "Patient " << i+1 << " Data: " << endl;
        p[i].printData(); // Calling the printData() function for each patient
        cout << endl;
    }
    cout << "This program is performed by 22CS051_DARSH"<<endl;
    return 0;
}