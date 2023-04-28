#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    char str[100];

public:
    String() {
        strcpy(str, "");
    }

    String(const char* s) {
        strcpy(str, s);
    }

    void get() {
        cout << "Enter a string: ";
        cin >> str;
    }

    void display() {
        cout << "String: " << str << endl;
    }

    String operator+(const String& s2) {
        String s3;
        strcat(s3.str, str);
        strcat(s3.str, s2.str);
        return s3;
    }

    bool operator==(const String& s2) {
        return strcmp(str, s2.str) == 0;
    }

    String operator+=(const String& s2) {
        strcat(str, s2.str);
        return *this;
    }
};

int main() {
    String string1, string2, string3;

    cout << "Enter String_1:\n";
    string1.get();
    cout << "Enter String_2:\n";
    string2.get();

    string1.display();
    string2.display();

    string3 = string1 + string2;
    cout << "Concatenation of String_1 and String_2: ";
    string3.display();

    if (string1 == string2) {
        cout << "String_1 and String_2 are equal.\n";
    } else {
        cout << "String_1 and String_2 are not equal.\n";
    }

    string1 += string2;
    cout << "String_2 added to String_1: ";
    string1.display();

    return 0;
}
