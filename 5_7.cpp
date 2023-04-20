//This program is performed by 22CS051_DARSH
#include<iostream>
using namespace std;
// Forward declaration of class Land
class Land;
// Class definition for Tile
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
    void number_of_tiles(Land &land); // Declaration of method to calculate number of tiles
};
// Class definition for Land
class Land {
public:
    float length, width, area1;
    void read() {
        cout << "Enter length of the land: ";
        cin >> length;
        cout << "Enter width of the land: ";
        cin >> width;
        area1 = length * width;
    }
    void display() {
        cout << "Length = " << length << " feet" << endl;
        cout << "Width = " << width << " feet" << endl;
        cout << "Area = " << area1 << " square feet" << endl;
    }
    friend void Tile::number_of_tiles(Land &land); // Allowing access to private members of Land by Tile
};
// Definition of method number_of_tiles in class Tile
void Tile::number_of_tiles(Land &land) {
    float num_tiles;
    num_tiles = land.area1 / area2;
    cout << "Number of tiles required to cover the land = " << num_tiles << endl;
}
int main() {
    Land land;
    Tile tile;
    cout << "Enter the details of the land:\n";
    land.read(); // Input land details
    land.display(); // Display land details
    cout << "Enter the details of the tile:\n";
    tile.get_data(); // Input tile details
    tile.display(); // Display tile details
    cout << "Calculating the number of tiles required:\n";
    tile.number_of_tiles(land); // Calculate and display number of tiles required
    cout << "This program is performed by 22CS051_DARSH" << endl;
    return 0;
}