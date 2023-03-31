/*Write a C++ program having class time with data members: hr, 
min and sec. Define following member functions. 
1) getdata() to enter hour, minute and second values 
2) putdata() to print the time in the format 11:59:59 
3) default constructor 
4) parameterized constructor 
 Use 52 as default value for sec in parameterized constructor.
5) copy constructor 
6) Destructor. 
Use the concepts of default constructor, parameterized constructor, 
Copy constructor, constructor with default arguments and 
destructor.
*/
#include<iostream>
using namespace std;
class Time{
    private:
    int hr, min, sec;
       
    public:
        Time() {
            hr = min = sec = 00;
        }
 
        Time(int h, int m, int s=52) {
            hr = h;
            min = m;
            sec = s;
        }
        
        Time(const Time &t) {
            hr = t.hr;
            min = t.min;
            sec = t.sec;
        }
            ~Time() {
            cout << "Object destroyed" << endl;
        }
        
        void getdata() {
            cout << "Enter time values (hours, minutes, seconds): ";
            cin >> hr >> min >> sec;
        }
     
        void putdata() {
            cout << hr << ":" << min << ":" << sec << endl;
        }
};

int main() {
    Time t1;
    cout << "Default constructor output: ";
    t1.putdata();
    
    Time t2(12, 30);
    cout << "Parameterized constructor output: ";
    t2.putdata();

    Time t3(t2);
    cout << "Copy constructor output: ";
    t3.putdata();
    
    Time t4;
    t4.getdata();
    cout << "User input time: ";
    t4.putdata();
    
    Time t5;
    t5.putdata();
    return 0;
}