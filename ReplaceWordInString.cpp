#include <iostream>
#include <string>

using namespace std;

// create a class
class String {
  // private data members
 private:
  string str;
  string strrep;
  string strtorep;

  // public members functions
 public:
  // getString() function to input string
  void getString() {
    cout << "Enter String : ";
    getline(cin, str);
  }

  // getSwap() function to input replace
  // word and by which replace
  void getSwap() {
    cout << "Enter String replace : ";
    cin >> strrep;

    cout << "Enter String to replace : ";
    cin >> strtorep;
  }

  // swapString() function to swap words
  string swapString() {
    // initializing int and string type variables to
    // perform operations and manipulations
    int index_1, index_2;
    string temp_1;
    string temp_2;

    // for loop for traversing the whole string
    for (index_1 = 0; str[index_1]; index_1++) {
      // copying words to temp_1 one by one of the string
      temp_1 = str.substr(index_1, strrep.length()), temp_2;

      // if replacing word is equal to the word in temp_1
      if (strrep == temp_1) {
        // the copy replacing word to temp_2

        temp_2 = strtorep;

        // for loop to swap words
        for (index_2 = 0; index_2 < strrep.length(); index_2++) {
          // append word in temp_2 to the string
          str[index_1 + index_2] = temp_2[index_2];
        }
      }
    }

    // transfering null
    str[index_1] = 0;

    // returning the edited string
    return str;
  }
};

int main() {
  // create an object
  String S;

  // string type variable to store edited string
  string str;

  // calling getString() function to insert the string
  S.getString();

  // getSwap() function to insert the replacing
  // and replaced words
  S.getSwap();

  // calling swapString() function to swap the
  // words in the string
  str = S.swapString();

  cout << "Edited String : " << str;

  return 0;
}
