#include <iostream>
#include <vector>

using namespace std;
using Matrix = vector<vector<double>>;
using Vec = vector<double>;

int main (){
  Matrix A = {
    {1, 0, 0},
    {0, 1, 0},
    {0, 0, 1}
  };

  if (A.size() == A[0].size()){
    bool flag = true;
    int s = A.size();
    for (int i = 0; i < s; i++){
      for (int j = 0; j < s; j++){
        if(((i == j) && (A[i][j] != 1)) || ((i != j) && (A[i][j] != 0))){
          flag = false;
        }
      }
    }
    string msg = flag ? "It is singular Matrix" : "It is not singular matrix";
    cout << msg << endl;
  }
  return 0;
}