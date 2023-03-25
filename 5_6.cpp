#include<iostream>
using namespace std;
class Date{
    private:
    int dd,mm,yyyy;
    public:
    void input(){
    cout << "in DD MM YYYY form : ";
    cin >> dd >> mm >> yyyy;
    }
    void print() {
      cout << "Date is: " << dd << "/" << mm << "/" << yyyy << endl;
    }
    friend void swapdata(Date & date1,Date & date2);
};
void swapdata(Date &date1,Date &date2)
{
    Date temp;
    temp= date1;
    date1 = date2;
    date2 = temp;    
    }
int main(){
Date date1,date2;
cout << "Enter the 1st Date ";
date1.input();
date1.print();
cout << "Enter the 2nd Date ";
date2.input();
date2.print();
swapdata(date1,date2);
cout<< "After swapping Date : " << endl;
date1.print();
date2.print();
return 0;

}