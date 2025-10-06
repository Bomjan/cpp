#include <iostream>
#include <vector>
#include <ctime>

using namespace std;
using Mat = vector<vector<double>>;
using Vec = vector<double>;

Mat generateMatrix();
void printMat(Mat matrix);

int main(){

  Mat mat = generateMatrix();
  cout << "The Matrix is " << endl;
  printMat(mat);

  Mat rsum(mat.size(), Vec(1));
  for (int i = 0; i < mat.size(); i++){
    double r = 0;
    for (int j = 0; j < mat[0].size(); j++){
      r += mat[i][j];
    }
    rsum[i][0] = r;
  }
  cout << "Sums of row\n";
  printMat(rsum);

  Mat csum(1, Vec(mat[0].size()));
  for (int i = 0; i < mat[0].size(); i++){
    double temp = 0;
    for (int j = 0; j < mat.size(); j++){
      temp += mat[j][i];
    }
    csum[0][i] = temp;
  }
  cout << "Sums of cols\n";
  printMat(csum);

  return 0;
}

Mat generateMatrix(){

  srand(time(0));
  int row = rand() % 4 + 2;
  int col = rand() % 4 + 2;

  Mat matrix(row, Vec(col));
  for (int i = 0; i < row; i++){
    for (int j = 0; j < col; j++){
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
