
#include <iostream>
using namespace std;

// Matrix Multiplication
int main() {

    int matrix1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrix2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int result[3][3];

    // Multiply Two Matrices
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {

            int total = 0;

            for(int k = 0; k < 3; k++) {
                total += matrix1[i][k] * matrix2[k][j];
            }

            result[i][j] = total;
        }
    }

    // Print First Matrix
    cout << "First Matrix:" << endl;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

    // Print Second Matrix
    cout << "\nSecond Matrix:" << endl;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }

    // Print Result Matrix
    cout << "\nMultiplication Result:" << endl;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
