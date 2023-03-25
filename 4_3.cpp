/*This program is performed by 22CS051_DARSH
#include<iostream>
#include<cmath>
using namespace std;
double power (int,int);
int main()
{
    double Num1,Num2, value;
    cin >> Num1 >> Num2;
    value=power(Num1,Num2);
    cout << value << endl;
    cout << "This program is performed by 22CS051_DARSH" << endl;

}
double power(int Num1, int Num2=2)
{
    double ans;
    ans=pow(Num1,Num2);
    return ans;
}*/




//This program is performed by 22CS051_DARSH
#include <iostream>
using namespace std;
inline double power(double base = 2, int exponent = 2) {
    double result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}
int main() {
    double base;
    int exponent;
    cout << "Enter base value: ";//base enter
    cin >> base;
    cout << "Enter exponent value: ";//enter exponent
    cin >> exponent;
    double result = power(base, exponent);
    cout << "Result: " << result << endl;
    cout << "This program is performed by 22CS051_DARSH" << endl; 
    return 0;
}
