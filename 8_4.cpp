#include <iostream>
#include <string>
using namespace std;

class Hospital
{
    protected:
        int rollNo;
        string name;
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
        int wardNo;
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
        int bedNo;
        string natureOfIllness;
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
            Hospital::getData();
            Ward::getWardData();
            Room::getRoomData();
        }
        void printData()
        {
            Hospital::printData();
            Ward::printWardData();
            Room::printRoomData();
        }
};

int main()
{
    Patient p[5];
    for(int i=0;i<5;i++)
    {
        cout << "Enter Patient " << i+1 << " Data: " << endl;
        p[i].getData();
    }

    cout << endl << endl;
    cout << "Patient Data: " << endl << endl;

    for(int i=0;i<5;i++)
    {
        cout << "Patient " << i+1 << " Data: " << endl;
        p[i].printData();
        cout << endl;
    }

    return 0;
}
