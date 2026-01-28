#include<iostream>
using namespace std;

class MatrixOperation {
public:

    void inputMatrix(int mat[][3], int rows, int cols) {
        cout << "Enter matrix elements (" << rows << "x" << cols << "):\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> mat[i][j];
            }
        }
    }

    void PrintMatrix(int mat[][3], int rows, int cols) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    void matrixAddition(int A[][3], int B[][3], int result[][3], int rows, int cols) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result[i][j] = A[i][j] + B[i][j];
            }
        }
    }

    void matrixMultiplication(int A[][3], int B[][3], int result[][3],
        int rowsA, int colsA, int colsB) {

        // initialize result
        for (int i = 0; i < rowsA; i++) {
            for (int j = 0; j < colsB; j++) {
                result[i][j] = 0;
            }
        }

        for (int i = 0; i < rowsA; i++) {
            for (int j = 0; j < colsB; j++) {
                for (int k = 0; k < colsA; k++) {
                    result[i][j] += A[i][k] * B[k][j];
                }
            }
        }
    }
};

int main() {
    MatrixOperation display;

    int A[3][3];
    int B[3][3];
    int result[3][3];

    cout << "Input Matrix A:" << endl;
    display.inputMatrix(A, 3, 3);

    cout << "\nInput Matrix B:" << endl;
    display.inputMatrix(B, 3, 3);

    cout << "\nMatrix A:" << endl;
    display.PrintMatrix(A, 3, 3);

    cout << "\nMatrix B:" << endl;
    display.PrintMatrix(B, 3, 3);

    display.matrixAddition(A, B, result, 3, 3);
    cout << "\nA + B:" << endl;
    display.PrintMatrix(result, 3, 3);

    display.matrixMultiplication(A, B, result, 3, 3, 3);
    cout << "\nA * B:" << endl;
    display.PrintMatrix(result, 3, 3);

    return 0;
}
