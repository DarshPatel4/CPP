//This program is performed by 22CS052_DARSH
#include<iostream>
using namespace std;
class Complex {
private:
    int real;
    int img;
public:
    // Default constructor
    Complex() {
        real = 0;
        img = 0;
    }
    // Parameterized constructor
    Complex(int r, int i) {
        real = r;
        img = i;
    }
    void printData() {
        cout << "Real Number: " << real << endl;
        cout << "Imaginary Number: " << img << endl;
        cout << "Complex Number: " << real << " + " << img << "i" << endl;
    }
    // Friend function to overload unary operator -
    friend Complex operator-(const Complex& c) {
        Complex result;
        result.real = -c.real;
        result.img = -c.img;
        return result;
    }
};
int main() {
    // Create an object of Complex with default constructor
    Complex c1;
    cout << "Data for c1 (Default Constructor): " << endl;
    c1.printData();
    cout << endl;

    // Create an object of Complex with parameterized constructor
    Complex c2(3, -4);
    cout << "Data for c2 (Parameterized Constructor): " << endl;
    c2.printData();
    cout << endl;

    // Use overloaded unary operator -
    Complex c3 = -c2;
    cout << "Data for c3 (Unary Operator -): " << endl;
    c3.printData();
    cout << "This program is performed by 22CS052_DARSH" << endl;
    return 0;
}