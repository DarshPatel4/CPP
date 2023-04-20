#include <iostream>
using namespace std;

// Define a class called "rectangle"
class rectangle {
public:
    int height, width;

    // Member function to get values for height and width of a rectangle
    void get_values() {
        cout << "Enter Height: ";
        cin >> height;
        cout << "Enter Width: ";
        cin >> width;
    }

    // Member function to calculate area and print it
    void area0() {
        cout << "The area is: " << (height * width) << endl;
    }

    // Member function to calculate area and print it with parameters
    void area1(int height, int width) {
        cout << "The area is: " << (height * width) << endl;
    }

    // Member function to calculate area and return it
    int area2(int height, int width) {
        return (height * width);
    }
};

int main() {
    rectangle var; // Declare an object "var" of type "rectangle"
    var.get_values(); // Call the member function get_values() to get input for height and width
    var.area1(var.height, var.width); // Call the member function area1() with parameters
    int area = var.area2(var.height, var.width); // Call the member function area2() and store the result in area
    cout << "The area is: " << area << endl; // Print the calculated area
    cout << "This program is performed by 22CS052_DARSH" << endl; // Print author information
    return 0;
}