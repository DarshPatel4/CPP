//This program is performed by 22CS051_DARSH
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  float num1,num2;
    cout << "This program is performed by 22CS051_DARSH" << endl;
    cout << "Enter num1 and num2 in float : " << endl;
    cin >> num1 >> num2;
    cout << scientific << num1+num2 << endl;
    cout << fixed << num1+num2 << endl;
    cout << setprecision(2) << num1+num2 << endl;
    return 0;
}