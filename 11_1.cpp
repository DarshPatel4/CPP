#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
int main()
{
    // Open a file named "22cs.txt" for writing
    ofstream fp("22cs.txt");

    if (fp.good()) {
   // Write characters from 'A' to 'Z' to the file
        for (char i = 65; i <= 91; i++) {
            fp.put(i);
        }
    }
    fp.close(); // Close the file
    // Open the file "22cs.txt" for reading
    ifstream ip("22cs.txt");
    cout << "Open file and store characters";
    if (!ip.bad() && !ip.fail() && !ip.eof()) {
        cout << "\nReading from the file: ";
    // Move the file pointer to the end of the file
        ip.seekg(-1, ios::end);
    // Print the current position of the file pointer
        cout << "\nFP: " << ip.tellg() << endl;
        char ch;
    // Read characters from the file in reverse order
        while (ip.tellg() >= 0) {
            if (!ip.eof()) {
                ip.get(ch);
                cout << ch;
                ip.seekg(-2, ios::cur);
    // Move the file pointer back by 2 positions
            }
        }
    }
    ip.close(); // Close the file
    cout<<"\nThis program is performed by 22CS051_DARSH"<<endl;
    return 0;
}