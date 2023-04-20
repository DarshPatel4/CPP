//This program is performed by 22CS051_DARSH
#include<iostream>
using namespace std;
class Date{
    private:
    int dd,mm,yyyy; // private members for day, month, and year
    public:
    void input(){ // method to input date
    cout << "in DD MM YYYY form : ";
    cin >> dd >> mm >> yyyy;
    }
    void print() { // method to print date
      cout << "Date is: " << dd << "/" << mm << "/" << yyyy << endl;
    }
    friend void swapdata(Date & date1,Date & date2); // declaring a friend function to swap data between Date objects
};
void swapdata(Date &date1,Date &date2) // definition of the friend function to swap data between Date objects
{
    Date temp; // create a temporary Date object to store the data
    temp = date1; // store data of date1 in temp
    date1 = date2; // copy data of date2 to date1
    date2 = temp; // copy data of temp to date2
}
int main(){
    Date date1, date2; // create two Date objects
    cout << "Enter the 1st Date ";
    date1.input(); // input date1
    date1.print(); // print date1
    cout << "Enter the 2nd Date ";
    date2.input(); // input date2
    date2.print(); // print date2
    swapdata(date1,date2); // call the swapdata function to swap the dates
    cout<< "After swapping Date : " << endl;
    date1.print(); // print date1 after swapping
    date2.print(); // print date2 after swapping
    cout << "This program is performed by 22CS051_DARSH" << endl;
    return 0;
}
