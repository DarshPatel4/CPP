//This program is performed by 22CS051_DARSH
#include<iostream>
using namespace std;
class Swap {
    int a, b;
public:
    void read() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }
    void swapValues() {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    void display() {
        cout << "After swapping, the values are: " << a << " " << b << endl;
    }
};
int main() {
    Swap obj;
    obj.read();
    obj.swapValues();
    obj.display();
    cout << "This program is performed by 22CS051_DARSH" << endl;
    return 0;
}
