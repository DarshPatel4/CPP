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
        Medicine::getData();
        cout << "Enter tablet name: ";
        cin >> tabletName;
        cout << "Enter quantity per pack: ";
        cin >> quantityPerPack;
        cout << "Enter price per tablet: ";
        cin >> pricePerTablet;
    }
    void displayData() {
        Medicine::displayData();
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
        Medicine::getData();
        cout << "Enter quantity per bottle: ";
        cin >> quantityPerBottle;
        cout << "Enter dosage unit: ";
        cin >> dosageUnit;
    }
    void displayData() {
        Medicine::displayData();
        cout << "Quantity per bottle: " << quantityPerBottle << endl;
        cout << "Dosage unit: " << dosageUnit << " ml" << endl;
    }
};

int main() {
    Tablet tablet;
    cout << "Enter details for tablet: " << endl;
    tablet.getData();
    cout << endl << "Details of tablet:" << endl;
    tablet.displayData();

    Syrup syrup;
    cout << endl << "Enter details for syrup: " << endl;
    syrup.getData();
    cout << endl << "Details of syrup:" << endl;
    syrup.displayData();

    return 0;
}