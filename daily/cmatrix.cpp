#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
using Mat = vector<vector<double>>;
using Vec = vector<double>;

class Matrix{
  
  public:
    int shape[2] = {0, 3};
    Mat mat;
    double det(){
      return determinant(mat);
    }
    Matrix(Mat mat){
      this->mat = mat;
    }

  private:
    double determinant(Mat matrix){
      double det = 0;
      int n = matrix.size();

      if (n == 1) return matrix[0][0];
      if (n == 2) return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
      
      for (int j = 0; j < n; j++){

        Mat minor((n-1), Vec(n-1));
        for (int r = 1; r < n; r++){
          int cIdx = 0;
          for (int c = 0; c < n; c++){
            if (c == j) continue;
            minor[r-1][cIdx] = matrix[r][c];
            cIdx++;
          }
        }
        int sign = (j % 2) ? -1: 1;
        det += sign * matrix[0][j] * determinant(minor);
      }

      return det;
    }
  
  
};
Mat generateMatrix();
void printMat(Mat matrix);
int main(){
  Matrix mat(generateMatrix());
  printMat(mat.mat);
  
  cout << mat.det() <<endl;
  return 0;
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