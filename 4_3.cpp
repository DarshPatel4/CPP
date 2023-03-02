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

}
double power(int Num1, int Num2=2)
{
    double ans;
    ans=pow(Num1,Num2);
    return ans;
}




/*
#include <iostream>

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
    
    std::cout << "Enter base value: ";
    std::cin >> base;
    
    std::cout << "Enter exponent value: ";
    std::cin >> exponent;
    
    double result = power(base, exponent);
    std::cout << "Result: " << result << std::endl;
    
    return 0;
}
*/