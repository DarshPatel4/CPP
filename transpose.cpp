#include <iostream>
using namespace std;

// Define Matrix class
class Matrix {
private:
    int size;
    int matrix[100][100];

public:
    // Constructor
    Matrix(int n) {
        size = n;
    }

    // Function to input matrix elements
    void inputMatrix() {
        cout << "Enter matrix elements:" << endl;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cin >> matrix[i][j];
            }
        }
    }

    // Function to display matrix
    void displayMatrix() {
        cout << "Matrix:" << endl;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Function to find transpose of the matrix
    void transposeMatrix() {
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                // Swap elements across the main diagonal
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
    }
};

int main() {
    int n;
    cout << "Enter size of the square matrix: ";
    cin >> n;

    // Create Matrix object
    Matrix mat(n);

    // Input matrix elements
    mat.inputMatrix();

    // Display original matrix
    cout << "Original ";
    mat.displayMatrix();

    // Find transpose of matrix
    mat.transposeMatrix();

    // Display transposed matrix
    cout << "Transposed ";
    mat.displayMatrix();

    return 0;
}
