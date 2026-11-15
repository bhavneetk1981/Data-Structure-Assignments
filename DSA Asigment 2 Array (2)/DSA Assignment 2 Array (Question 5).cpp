#include <iostream>
using namespace std;

int main() {
    int n, m;

    cout << "Enter rows and columns: ";
    cin >> n >> m;

    int a[10][10];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    cout << "Zigzag diagonal traversal: ";

    for (int d = 0; d < n + m - 1; d++) {
        if (d % 2 == 0) {
            int row = (d < n) ? d : n - 1;
            int col = d - row;

            while (row >= 0 && col < m) {
                cout << a[row][col] << " ";
                row--;
                col++;
            }
        } else {
            int col = (d < m) ? d : m - 1;
            int row = d - col;

            while (col >= 0 && row < n) {
                cout << a[row][col] << " ";
                row++;
                col--;
            }
        }
    }

    return 0;
}