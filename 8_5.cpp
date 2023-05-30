#include <iostream>
#include <string>
using namespace std;
// Base class: Shape
class Shape {
protected:
    string shape_name; // Data member to store the name of the shape
public:
    void getShapeName() {
        cout << "Enter shape name: ";
        cin >> shape_name;
    }
    void printShapeName() {
        cout << "Shape name: " << shape_name << endl;
    }
};
// Derived class: Circle
class Circle : public Shape {
protected:
    float radius; // Data member to store the radius of the circle
public:
    void getRadius() {
        cout << "Enter radius of the circle: ";
        cin >> radius;
    }
    void printRadius() {
        cout << "Radius of the circle: " << radius << endl;
    }
};
// Derived class: Area
class Area : public Circle {
protected:
    float area_of_circle; // Data member to store the area of the circle
public:
    void calculateArea() {
        area_of_circle = 3.14159 * radius * radius; // Calculating the area of the circle using the formula A = πr^2
    }
    void display() {
        printShapeName(); // Accessing the base class member function to print the shape name
        printRadius(); // Accessing the derived class member function to print the radius
        cout << "Area of the circle: " << area_of_circle << endl;
    }
};
int main() {
    Area circle; // Creating an object of the Area class
    circle.getShapeName(); // Getting the shape name from the user
    circle.getRadius(); // Getting the radius of the circle from the user
    circle.calculateArea(); // Calculating the area of the circle
    cout << endl;
    circle.display(); // Displaying all the information (shape name, radius, and area) of the circle
    cout << "This program is performed by 22CS051_DARSH";
    return 0;
}