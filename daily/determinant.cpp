#include <iostream>
#include <vector>
#include <ctime>
#include <cmath>

using namespace std;
using Mat = vector<vector<double>>;
using Vec = vector<double>;

Mat generateMatrix();
void printMat(Mat matrix);
double determinant(Mat matrix);

int main(){
  Mat matrix = generateMatrix();
  printMat(matrix);
  double det = determinant(matrix);
  cout << "The determinant is " << det << endl;
  return 0;
}

double determinant(Mat matrix) {
    int n = matrix.size();

    // Base case: 1x1 matrix
    if (n == 1) return matrix[0][0];

    // Base case: 2x2 matrix
    if (n == 2) 
        return matrix[0][0]*matrix[1][1] - matrix[0][1]*matrix[1][0];

    double det = 0;

    // Expand along first row
    for (int j = 0; j < n; j++) {
        // Build minor (n-1)x(n-1)
        Mat minor(n-1, Vec(n-1));
        for (int r = 1; r < n; r++) {
          int cIdx = 0;
          for (int c = 0; c < n; c++) {
            if (c == j) continue;         
            minor[r-1][cIdx] = matrix[r][c];
            cIdx++;
          }
        }

        double sign = (j % 2 == 0) ? 1 : -1;

        det += sign * matrix[0][j] * determinant(minor);
    }

    return det;
}

Mat generateMatrix(){

  srand(time(0));
  int n = rand() % 3 + 1;

  Mat matrix(n, Vec(n));
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      matrix[i][j] = rand() % 10;
    }
  }
  return matrix;
}

void printMat(Mat matrix){
  for (Vec x: matrix){
    cout << "  | ";
    for (double y: x){
      cout << y << " ";
    }
    cout << "|" << endl;
  }
  cout << endl;
}