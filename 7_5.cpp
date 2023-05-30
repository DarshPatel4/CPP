/*#include <iostream>
using namespace std;
class Fahrenheit; // Forward declaration
class Celsius {
private:
    float temperature;
public:
    // Constructor
    Celsius(float temp = 0.0f) : temperature(temp) {}
    // Type conversion from Celsius to Fahrenheit
    operator Fahrenheit();
    // Getter function for temperature
    float getTemperature() const {
        return temperature;
    }
};
class Fahrenheit {
private:
    float temperature;
public:
    // Constructor
    Fahrenheit(float temp = 0.0f) : temperature(temp) {}
    // Type conversion from Fahrenheit to Celsius
    operator Celsius() {
        return Celsius((temperature - 32) * 5 / 9);
    }
    // Getter function for temperature
    float getTemperature() const {
        return temperature;
    }
};
// Type conversion from Celsius to Fahrenheit
Celsius::operator Fahrenheit() {
    return Fahrenheit((temperature * 9 / 5) + 32);
}
int main() {
    Celsius C1;
    Celsius C2 = 5.0;
    Fahrenheit F1;
    Fahrenheit F2;
    F1 = C2; // Celsius to Fahrenheit conversion
    C1 = F2; // Fahrenheit to Celsius conversion
    cout << "C1 temperature: " << C1.getTemperature() << " degrees Celsius\n";
    cout << "F1 temperature: " << F1.getTemperature() << " degrees Fahrenheit\n";
    cout << "This program is performed by 22CS051_DARSH";
    return 0;
}
*/



#include <iostream>
using namespace std;
class Celsius; // Forward declaration
class Fahrenheit {
private:
    float temperature;
public:
    // Constructor
    Fahrenheit(float temp = 0.0f) : temperature(temp) {}
    // Type conversion from Fahrenheit to Celsius
    operator Celsius();
    // Getter function for temperature
    float getTemperature() const {
        return temperature;
    }
};
class Celsius {
private:
    float temperature;
public:
    // Constructor
    Celsius(float temp = 0.0f) : temperature(temp) {}
    // Type conversion from Celsius to Fahrenheit
    operator Fahrenheit() {
        return Fahrenheit((temperature * 9 / 5) + 32);
    }
    // Getter function for temperature
    float getTemperature() const {
        return temperature;
    }
};
// Type conversion from Fahrenheit to Celsius
Fahrenheit::operator Celsius() {
    return Celsius((temperature - 32) * 5 / 9);
}
int main() {
    Celsius C1;
    Celsius C2 = 5.0;
    Fahrenheit F1;
    Fahrenheit F2;
    F1 = C2; // Celsius to Fahrenheit conversion
    C1 = F2; // Fahrenheit to Celsius conversion
    cout << "C1 temperature: " << C1.getTemperature() << " degrees Celsius\n";
    cout << "F1 temperature: " << F1.getTemperature() << " degrees Fahrenheit\n";
    cout << "This program is performed by 22CS051_DARSH";
    return 0;
}

