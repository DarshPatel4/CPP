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
//This program is performed by 22CS051_DARSH
#include<iostream>
using namespace std;
class Time{
    private:
    int hr, min, sec; // private member variables to store hours, minutes, and seconds
       
    public:
        Time() { // Default constructor
            hr = min = sec = 0; // initializes all member variables to 0
        }
        Time(int h, int m, int s=52) { // Parameterized constructor with default value for seconds
            hr = h; // initializes hr with value of h
            min = m; // initializes min with value of m
            sec = s; // initializes sec with value of s or default value of 52
        }        
        Time(const Time &t) { // Copy constructor
            hr = t.hr; // initializes hr with value of hr from t
            min = t.min; // initializes min with value of min from t
            sec = t.sec; // initializes sec with value of sec from t
        }  
        ~Time() { // Destructor
            cout << "Object destroyed" << endl; // displays a message when object is destroyed
        }
        void getdata() { // Member function to get time values from user
            cout << "Enter time values (hours, minutes, seconds): ";
            cin >> hr >> min >> sec; // reads values from user input and stores in hr, min, sec respectively
        }
        void putdata() { // Member function to display time values
            cout << hr << ":" << min << ":" << sec << endl; // displays hr, min, sec separated by colons
        }
};
int main() {
    Time t1; // creates an object t1 using default constructor
    cout << "Default constructor output: ";
    t1.putdata(); // displays time values of t1
    
    Time t2(12, 30); // creates an object t2 using parameterized constructor with values 12, 30
    cout << "Parameterized constructor output: ";
    t2.putdata(); // displays time values of t2

    Time t3(t2); // creates an object t3 using copy constructor with values from t2
    cout << "Copy constructor output: ";
    t3.putdata(); // displays time values of t3
    
    Time t4; // creates an object t4 using default constructor
    t4.getdata(); // gets time values from user for t4
    cout << "User input time: ";
    t4.putdata(); // displays time values of t4
    
    Time t5; // creates an object t5 using default constructor
    t5.putdata(); // displays time values of t5
    cout << "This program is performed by 22CS051_DARSH" << endl;
    return 0;
}
