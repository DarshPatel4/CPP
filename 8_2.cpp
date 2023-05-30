#include <iostream>
#include <string>
using namespace std;
class Medicine {
protected:
    string type;
    string company;
    string manufacturingDate;
public:
    void getData() {
        cout << "Enter medicine type: ";
        cin >> type;
        cout << "Enter company name: ";
        cin >> company;
        cout << "Enter manufacturing date: ";
        cin >> manufacturingDate;
    }
    void displayData() {
        cout << "Medicine type: " << type << endl;
        cout << "Company name: " << company << endl;
        cout << "Manufacturing date: " << manufacturingDate << endl;
    }
};
class Tablet : public Medicine {
private:
    string tabletName;
    int quantityPerPack;
    float pricePerTablet;
public:
    void getData() {
        Medicine::getData(); // Call the base class (Medicine) getData() function to get the common medicine details.
        cout << "Enter tablet name: ";
        cin >> tabletName;
        cout << "Enter quantity per pack: ";
        cin >> quantityPerPack;
        cout << "Enter price per tablet: ";
        cin >> pricePerTablet;
    }
    void displayData() {
        Medicine::displayData(); // Call the base class (Medicine) displayData() function to display the common medicine details.
        cout << "Tablet name: " << tabletName << endl;
        cout << "Quantity per pack: " << quantityPerPack << endl;
        cout << "Price per tablet: " << pricePerTablet << endl;
    }
};
class Syrup : public Medicine {
private:
    int quantityPerBottle;
    int dosageUnit;
public:
    void getData() {
        Medicine::getData(); // Call the base class (Medicine) getData() function to get the common medicine details.
        cout << "Enter quantity per bottle: ";
        cin >> quantityPerBottle;
        cout << "Enter dosage unit: ";
        cin >> dosageUnit;
    }
    void displayData() {
        Medicine::displayData(); // Call the base class (Medicine) displayData() function to display the common medicine details.
        cout << "Quantity per bottle: " << quantityPerBottle << endl;
        cout << "Dosage unit: " << dosageUnit << " ml" << endl;
    }
};
int main() {
    Tablet tablet;
    cout << "Enter details for tablet: " << endl;
    tablet.getData(); // Call the getData() function of the Tablet class to get tablet-specific details.
    cout << endl << "Details of tablet:" << endl;
    tablet.displayData(); // Call the displayData() function of the Tablet class to display the tablet-specific details.
    Syrup syrup;
    cout << endl << "Enter details for syrup: " << endl;
    syrup.getData(); // Call the getData() function of the Syrup class to get syrup-specific details.
    cout << endl << "Details of syrup:" << endl;
    syrup.displayData(); // Call the displayData() function of the Syrup class to display the syrup-specific details.
    cout << "This program is performed by 22CS051_DARSH";
    return 0;
}