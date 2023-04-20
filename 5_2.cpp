#include <iostream>
#include <string>
using namespace std;

class Batsman {
    private:
        string batsman_name;
        int bcode, innings, not_out, runs;
        float batting_average;
        
        // Private member function to calculate batting average
        inline void calcavg() {
            batting_average = runs / static_cast<float>(innings - not_out);
        }
        
    public:
        // Public member function to get input data from user
        void getdata() {
            cout << "Enter batsman name: ";
            getline(cin >> ws, batsman_name); // Using getline to allow input with spaces
            cout << "Enter bcode: ";
            cin >> bcode;
            cout << "Enter innings: ";
            cin >> innings;
            cout << "Enter not out: ";
            cin >> not_out;
            cout << "Enter runs: ";
            cin >> runs;
            calcavg(); // Call calcavg to calculate batting average
        }
        
        // Public member function to display output data
        void putdata() {
            cout << "Batsman name: " << batsman_name << endl;
            cout << "Bcode: " << bcode << endl;
            cout << "Innings: " << innings << endl;
            cout << "Not out: " << not_out << endl;
            cout << "Runs: " << runs << endl;
            cout << "Batting average: " << batting_average << endl;
        }
};

int main() {
    Batsman batsman;
    batsman.getdata(); // Call getdata to input data from user
    batsman.putdata(); // Call putdata to display output data
    cout << "This program is performed by 22CS051_DARSH" << endl;
    return 0;
}
