#include <iostream>
#include <vector>

using namespace std;
using Matrix = vector<vector<double>>;
using Vec = vector<double>;

int main (){

  Matrix A = {
    {2, 4, 5},
    {3, 1, 0},
    {4, 7, 6}
  };
  Matrix B = {
    {3, 6, 0},
    {1, 6, 9},
    {2, 1, 1}
  };

  if (A[0].size() == B.size()){
    Matrix C(A.size(), Vec(B[0].size()));

    for (int i = 0; i < A.size(); i++){
      for (int j = 0; j < B[0].size(); j++){
        int val = 0;
        for(int k = 0; k < A[0].size(); k++){
          val += A[i][k] * B[k][j];
        }
        C[i][j] = val;
      }
    }

    for(Vec i: C){
      for (double j: i){
        cout << j << " ";
      }
      cout << endl;
    }

  } else {
    cout << "Matrix cannot be multiplied bro! " << endl;
  }

  return 0;
}