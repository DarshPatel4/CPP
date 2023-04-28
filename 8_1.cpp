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
        Vegetable::getData();
        cout << "Enter weight (in kg): ";
        cin >> weight;
        cout << "Enter size: ";
        cin >> size;
    }

    void putData() {
        Vegetable::putData(); 
        cout << "Weight: " << weight << " Kg" << endl;
        cout << "Size: " << size << endl;
    }
};

int main() {
    Tomato t;
    t.getData();
    cout << endl;
    t.putData();

    return 0;
}