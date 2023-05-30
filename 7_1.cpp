#include <iostream>
using namespace std;

class Number {
private:
    int num;

public:
    // Default constructor
    Number() {
        num = 0;
    }

    // Parameterized constructor
    Number(int n) {
        num = n;
    }

    // Copy constructor
    Number(const Number &other) {
        num = other.num;
    }

    // Function to take input from user
    void input() {
        cout << "Enter a number: ";
        cin >> num;
    }

    // Function to display the number
    void output() {
        cout << "Number: " << num << endl;
    }

    // Prefix increment operator overloading
    Number &operator++() {
        num++;
        return *this;
    }

    // Postfix increment operator overloading
    Number operator++(int) {
        Number temp(*this);
        num++;
        return temp;
    }

    // Unary minus operator overloading
    Number operator-() {
        Number temp(*this);
        temp.num = -temp.num;
        return temp;
    }
};

int main() {
    // Creating three Number objects
    Number N1, N2, N3;

    // Taking input for N1 from user
    cout << "Enter N1:" << endl;
    N1.input();

    // Using postfix increment operator
    N1 = N2++;
    cout << "N1 after N1 = N2++:" << endl;
    N1.output();
    N2.output();

    // Using prefix increment operator
    N3 = ++N1;
    cout << "N3 after N3 = ++N1:" << endl;
    N3.output();
    N1.output();

    // Using unary minus operator
    N3 = -N3;
    cout << "N3 after N3 = -N3:" << endl;
    N3.output();

    cout << "This program is performed by 22CS052_DARSH" << endl;

    return 0;
}          
