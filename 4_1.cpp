//This program is performed by 22CS051_DARSH
#include<iostream>
using namespace std;
// Function to check if numerator is divisible by denominator
string divide(int numerator, int denominator) {
    if (numerator % denominator == 0) {
        return "Number is Divisible";
    } else {
        return "Number is Not divisible";
    }
}
// Function to check if a number is prime or not
string divide(int number) {
    if (number <= 1) {
        return "Number is Not prime";
    }
    for (int i = 2; i*i <= number; i++) {
        if (number % i == 0) {
            return "Not prime";
        }
    }
    return "Prime";
}
// Function to find average of three float numbers
float divide(float num1, float num2, float num3) {
    float average = (num1 + num2 + num3) / 3;
    return average;
}
int main() {
    int num1, num2, number;
    float FNum1, FNum2, FNum3, average;
    cout << "This Program is performed by Darsh_22CS051" << endl;
    // Check if numerator is divisible by denominator
    cout << "Input two numbers to check if it is divisible or not\n";
    cout << "Number1 = ";
    cin >> num1;
    cout << "Number2 = ";
    cin >> num2;
    cout << divide(num1, num2) << endl;
    // Check if a number is prime or not
    cout << "Input a number to check if it is prime or not\n";
    cout << "Number = ";
    cin >> number;
    cout << divide(number) << endl;
    // Find average of three float numbers
    cout << "Enter three float numbers to get average of them\n";
    cout << "FNum1 = ";
    cin >> FNum1;
    cout << "FNum2 = ";
    cin >> FNum2;
    cout << "FNum3 = ";
    cin >> FNum3;
    average = divide(FNum1, FNum2, FNum3);
    cout << "Average = " << average << endl;

    return 0;
}