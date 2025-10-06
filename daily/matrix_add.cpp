#include <iostream>
#include <vector>
using namespace std;

using dMat = vector<vector<double>>;
using dVec = vector<double>;

int main(){

  dMat matA = {
    {1, 1, 1},
    {1, 1, 1},
    {1, 1, 1}
  };

  dMat matB = {
    {2, 2, 2},
    {2, 2, 2},
    {2, 2, 2}
  };

  dMat sumMat(matA.size(), dVec(matA[0].size()));

  for (int i = 0; i < matA.size(); i++){
    for ( int j = 0; j < matA[i].size(); j++){
      sumMat[i][j] = matA[i][j] + matB[i][j];
    }
  }

  for(dVec x : sumMat){
    for(double y: x){
      cout << y << " ";
    }
    cout << endl;
  }

  return 0;
}
