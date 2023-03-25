//This program is performed by 22CS051_DARSH
#include <iostream>
#include <string>
using namespace std;
class Batsman {
    private:
        string batsman_name;
        int bcode,innings,not_out,runs;
        float batting_average;
        inline void calcavg() {
            batting_average = runs / static_cast<float>(innings - not_out);
        }
    public:
        void getdata() {
            cout << "Enter batsman name: ";
            getline(cin >> ws, batsman_name);
            cout << "Enter bcode: ";
            cin >> bcode;
            cout << "Enter innings: ";
            cin >> innings;
            cout << "Enter not out: ";
            cin >> not_out;
            cout << "Enter runs: ";
            cin >> runs;
            calcavg();
        }
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
    batsman.getdata();
    batsman.putdata();
    cout << "This program is performed by 22CS051_DARSH" << endl;
    return 0;
}
