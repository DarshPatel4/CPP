//This program is performed by 22CS051_DARSH
#include <iostream>
using namespace std;
class Number {
private:
    int num;

public:
    Number() {
        num = 0;
    }
    Number(int n) {
        num = n;
    }
    Number(const Number &other) {
        num = other.num;
    }
    void input() {
        cout << "Enter a number: ";
        cin >> num;
    }
    void output() {
        cout << "Number: " << num << endl;
    }
    Number &operator++() {
        num++;
        return *this;
    }
    Number operator++(int) {
        Number temp(*this);
        num++;
        return temp;
    }
    Number operator-() {
        Number temp(*this);
        temp.num = -temp.num;
        return temp;
    }
};

int main() {
    Number N1, N2, N3;
    cout << "Enter N1:"<<endl;
    N1.input();

    N1 = N2++;
    cout << "N1 after N1 = N2++:"<<endl;
    N1.output();
    N2.output();

    N3 = ++N1;
    cout << "N3 after N3 = ++N1:"<<endl;
    N3.output();
    N1.output();

    N3 = -N3;
    cout << "N3 after N3 = -N3:"<<endl;
    N3.output();
    cout << "This program is performed by 22CS052_DARSH" << endl; 
    return 0;
}