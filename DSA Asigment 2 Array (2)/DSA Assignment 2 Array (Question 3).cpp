#include <iostream>
using namespace std;

int main() {
    int rows, cols, nonZero = 0;

    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    int matrix[10][10];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];

            if (matrix[i][j] != 0)
                nonZero++;
        }
    }

    cout << "\nTranspose of sparse matrix:\n";

    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}