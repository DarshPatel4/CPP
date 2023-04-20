/*write c++ program for Define a class Dist with int feet and float inches. Define member 
function that displays distance in 1’-2.5” format. Also define member 
function scale ( ) function that takes object by reference and scale 
factor in float as an input argument. The function will scale the distance 
accordingly. 
For example, 20’-5.5” and Scale Factor is 0.5 then answer is 10’-2.75”
*/
//This program is performed by 22CS051_DARSH
#include<iostream>
using namespace std;
class Dist
{
private:
    int feet;
    float inches;
public:
    // Member function to enter distance in feet and inches
    void enter()
    {
        cout << "Enter distance in feet: ";
        cin >> feet;
        cout << "Enter distance in inches: ";
        cin >> inches;
    }
    // Member function to display distance in 1'-2.5" format
    void display()
    {
        cout << "Distance: " << feet << "'-" << inches << "\"" << endl;
        
    }
    // Member function to scale distance by a given factor
    void scale(float factor)
    {
        float totalInches = feet * 12 + inches; // Convert feet to inches and add inches
        totalInches *= factor; // Scale the total inches by the factor
        feet = totalInches / 12; // Convert total inches back to feet
        inches = totalInches - feet * 12; // Calculate remaining inches
    }
};
int main()
{
    Dist d1; // Create a Dist object
    d1.enter(); // Enter distance
    cout << "Original distance: ";
    d1.display(); // Display original distance
    float scaleFactor;
    cout << "Enter scaling factor: ";
    cin >> scaleFactor; // Enter scaling factor
    d1.scale(scaleFactor); // Scale the distance
    cout << "Scaled distance: ";
    d1.display(); // Display scaled distance
    cout << "This program is performed by 22CS051_DARSH" << endl;
    return 0;
}