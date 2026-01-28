#include<iostream>
using namespace std;
class MatrixOperation{
    public:
    void PrintMatrix(int mat[][3],int rows,int cols){
        for(int i = 0; i<rows;i++){
            for(int j=0;j<cols;j++){
                cout << mat[i][j] <<" ";
            }
            cout << endl;
        }
    }

void matrixAddition(int A[][3],int B[][3],int result [][3],int rows,int cols){
        for(int i = 0; i<rows;i++){
            for(int j=0;j<cols;j++){
                          result[i][j]=A[i][j] + B[i][j];
            }
            cout << endl;
        }
    }
    };
int main(){
MatrixOperation display;
// int mat[3][3]={{1, 2, 3},{4, 5, 6},{7, 8, 9}};
int A[3][3]={{1, 2, 3},{4, 5, 6},{7, 8, 9}};
int B[3][3]={{1, 2, 3},{4, 5, 6},{7, 8, 9}};
int result[3][3];
//cout << "display matrix:"<< endl;
//display.PrintMatrix(mat,3,3);
cout << " Matrix A:"<< endl;
display.PrintMatrix(A,3,3);
cout << " Matrix B:"<< endl;
display.PrintMatrix(B,3,3);
display.matrixAddition(A,B,result,3,3);
cout << "\nA + B:" << endl;
display.PrintMatrix(result, 3, 3);
//display.MatrixAddition(B,3,3);
//cout << \nA+B;


return 0;
}