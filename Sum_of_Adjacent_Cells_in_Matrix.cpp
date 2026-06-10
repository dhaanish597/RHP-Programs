#include <iostream>
using namespace std;

int main() {

    // Matrix initialization
    int mat[4][5] = {
        {10, 20, 30, 40, 50},
        {1,  2,  3,  4,  5},
        {6,  7,  8,  9, 25},
        {100, 50, 40, 30, 20}
    };

    int rows = 4, cols = 5;

    // Input row and column index
    int r, c;
    cin >> r >> c;

    // 8 directions
    int dir[8][2] = {
        {-1, -1}, {-1, 0}, {-1, 1},
        { 0, -1},          { 0, 1},
        { 1, -1}, { 1, 0}, { 1, 1}
    };

    int sum = 0;

    // Traverse all 8 neighbors
    for (int k = 0; k < 8; k++) {

        int nr = r + dir[k][0];
        int nc = c + dir[k][1];

        // Boundary check
        if (nr >= 0 && nr < rows &&
            nc >= 0 && nc < cols) {

            sum += mat[nr][nc];
        }
    }

    // Output sum
    cout << "Sum of neighbors = " << sum;

    return 0;
}
