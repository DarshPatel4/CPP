/*write c++ program for Define a class Dist with int feet and float inches. Define member 
function that displays distance in 1’-2.5” format. Also define member 
function scale ( ) function that takes object by reference and scale 
factor in float as an input argument. The function will scale the distance 
accordingly. 
For example, 20’-5.5” and Scale Factor is 0.5 then answer is 10’-2.75”
*/
#include<iostream>
using namespace std;
class Dist{
    
}


/*
#include <iostream>
using namespace std;

class Date {
  private:
    int dd, mm, yyyy;

  public:
    void input() {
      cout << "Enter date in the format DD/MM/YYYY: ";
      scanf("%d/%d/%d", &dd, &mm, &yyyy);
    }

    void print() {
      cout << "Date is: " << dd << "/" << mm << "/" << yyyy << endl;
    }

    friend void swapdates(Date& date1, Date& date2) {
      Date temp = date1;
      date1 = date2;
      date2 = temp;
    }
};

int main() {
  Date date1, date2;

  cout << "Enter the first date:\n";
  date1.input();
  date1.print();

  cout << "Enter the second date:\n";
  date2.input();
  date2.print();

  swapdates(date1, date2);

  cout << "\nAfter swapping:\n";
  cout << "Date 1: ";
  date1.print();
  cout << "Date 2: ";
  date2.print();

  return 0;
}

*/
/*#include <iostream>
using namespace std;

class Tile;

class Land {
  private:
    float length, width, area1;

  public:
    void read() {
      cout << "Enter length of the land: ";
      cin >> length;
      cout << "Enter width of the land: ";
      cin >> width;
      area1 = length * width;
    }

    void display() {
      cout << "Length of land = " << length << " feet" << endl;
      cout << "Width of land = " << width << " feet" << endl;
      cout << "Area of land = " << area1 << " square feet" << endl;
    }

    friend void Tile::number_of_tiles(Land& land);
};

class Tile {
  private:
    float l, w, area2;

  public:
    void get_data() {
      cout << "Enter length of one tile: ";
      cin >> l;
      cout << "Enter width of one tile: ";
      cin >> w;
      area2 = l * w;
    }

    void display() {
      cout << "Length of one tile = " << l << " feet" << endl;
      cout << "Width of one tile = " << w << " feet" << endl;
      cout << "Area of one tile = " << area2 << " square feet" << endl;
    }

    friend void number_of_tiles(Land& land);
};

void number_of_tiles(Land& land) {
  float num_tiles = land.area1 / area2;
  cout << "Number of tiles required to cover the land = " << num_tiles << endl;
}

int main() {
  Land land;
  Tile tile;

  cout << "Enter the details of the land:\n";
  land.read();
  land.display();

  cout << "Enter the details of the tile:\n";
  tile.get_data();
  tile.display();

  cout << "Calculating the number of tiles required:\n";
  number_of_tiles(land);

  return 0;
}
*/