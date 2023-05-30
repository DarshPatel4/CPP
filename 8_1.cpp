#include <iostream>
#include <string>
using namespace std;
class Vegetable {
protected:
    string color; 
public:
    void getData() {
        cout << "Enter color: ";
        cin >> color;
    }
    void putData() {
        cout << "Color: " << color << endl;
    }
};
class Tomato : public Vegetable {
private:
    int weight;
    int size;
public:
    void getData() {
        Vegetable::getData(); // Call the base class (Vegetable) getData() function to get the color.
        cout << "Enter weight (in kg): ";
        cin >> weight;
        cout << "Enter size: ";
        cin >> size;
    }
    void putData() {
        Vegetable::putData(); // Call the base class (Vegetable) putData() function to display the color.
        cout << "Weight: " << weight << " Kg" << endl;
        cout << "Size: " << size << endl;
    }
};
int main() {
    Tomato t;
    t.getData(); // Call the getData() function of Tomato class to get the color, weight, and size of the tomato.
    cout << endl;
    t.putData(); // Call the putData() function of Tomato class to display the color, weight, and size of the tomato.
    cout << "This program is performed by 22CS051_DARSH";
    return 0;
}