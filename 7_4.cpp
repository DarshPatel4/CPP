//This program is performed by 22CS051_DARSH
#include <iostream>
using namespace std;
class Celsius {
private:
    float temperature;
public:
    // Constructor
    Celsius(float temp = 0.0f) : temperature(temp) {}
    // Type conversion from Celsius to float
    operator float() const {
        return temperature;
    }
    // Type conversion from float to Celsius
    Celsius& operator=(float temp) {
        temperature = temp;
        return *this;

    }
};
int main() {
    Celsius C1; // Create a Celsius object
    C1 = 30.5f; // Assign a float value to the Celsius object
    float temperature;
    temperature = C1; // Convert Celsius object to float
    cout << "C1 temperature: " << static_cast<float>(C1) << " degrees Celsius\n";
    cout << "temperature: " << temperature << " degrees Celsius\n";
    cout << "This program is performed by 22CS051_DARSH";
    return 0;
}
