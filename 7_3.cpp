//This program is performed by 22CS051_DARSH
#include <iostream>
#include <cstring>
using namespace std;

// Define the class String
class String {
private:
char str[100]; // character array to store the string

public:
// Default constructor
String() {
strcpy(str, ""); // initialize str to an empty string
}

// Parameterized constructor to initialize str with a given string
String(const char* s) {
    strcpy(str, s);
}

// Member function to get a string from user
void get() {
    cout << "Enter a string: ";
    cin >> str;
}

// Member function to display the string
void display() {
    cout << "String: " << str << endl;
}

// Overload the + operator to concatenate two strings
String operator+(const String& s2) {
    String s3;
    strcat(s3.str, str);
    strcat(s3.str, s2.str);
    return s3;
}

// Overload the == operator to check if two strings are equal
bool operator==(const String& s2) {
    return strcmp(str, s2.str) == 0;
}

// Overload the += operator to add a string to another string
String operator+=(const String& s2) {
    strcat(str, s2.str);
    return *this;
}
};

int main() {
// Create three String objects
String string1, string2, string3;

// Get two strings from the user
cout << "Enter String_1:\n";
string1.get();
cout << "Enter String_2:\n";
string2.get();

// Display the two strings
string1.display();
string2.display();

// Concatenate the two strings and display the result
string3 = string1 + string2;
cout << "Concatenation of String_1 and String_2: ";
string3.display();

// Check if the two strings are equal
if (string1 == string2) {
    cout << "String_1 and String_2 are equal.\n";
} else {
    cout << "String_1 and String_2 are not equal.\n";
}

// Add string2 to string1 and display the result
string1 += string2;
cout << "String_2 added to String_1: ";
string1.display();
cout << "This program is performed by 22CS051_DARSH";
return 0;
}