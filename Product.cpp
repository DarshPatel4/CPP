#include <iostream>

using namespace std;

// create a class
class Product {
  // private data member
  private:
    int number;

  // public functions
  public:
    // getNumber() function to get the number
    void getNumber() {
      cout << "Enter Number:";
      cin >> number;
    }

  // multiply() function to find the product of all digits of the number
  int multiply() {
    int product = 1, remain;

    while (number) {

      // the last digit of number is stored in remain by % operator
      remain = number % 10;

      // remain is multiplied in the product
      product = product * remain;

      // number is divided by 10 to discard the last digit
      number = number / 10;
    }

    // returning the product
    return product;
  }
};

int main() {
  // create a object
  Product P;

  // int type variable to store the product of all digits in it
  int product;

  // function is called by the object to store the number
  P.getNumber();

  // multiply() function to multiply all digits of the number
  product = P.multiply();

  cout << "Product of all digits of the number is " << product;

  return 0;
}
