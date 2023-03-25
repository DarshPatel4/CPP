#include<iostream>
using namespace std;
class Land;
class Tile {
 public:
    float l, w, area2;
    
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
    void number_of_tiles(Land &land);
};
class Land{
public:
float length, width, area1;

    void read() {
      cout << "Enter length of the land : ";
      cin >> length;
      cout << "Enter width of the land : ";
      cin >> width;
      area1 = length * width;
    }
    void display() {
      cout << "Length = " << length << " feet" << endl;
      cout << "Width = " << width << " feet" << endl;
      cout << "Area = " << area1 << " square feet" << endl;
    }
friend void Tile::number_of_tiles(Land &land);
};

void Tile::number_of_tiles(Land &land) {
  float num_tiles;
  num_tiles = land.area1/area2;
  cout << "Number of tiles required to cover the land = " << num_tiles << endl;
};
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
  tile.number_of_tiles(land);
  return 0;
}
