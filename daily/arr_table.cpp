#include <iostream>
#include <vector>
using namespace std;

typedef vector<double> dVec;
typedef vector<string> sVec;
typedef vector<vector <string>> sMat;

int main(){
  sMat array;
  dVec dim = {1, 8};
  for (int i = 1; i < 10; i++){
    sVec temp;
    for(int j = dim[0]; j < dim[1]; j++){
      string piece = to_string(j) + " x " + to_string(i) + " = " + to_string(i*j);
      temp.push_back(piece);
    }
    array.push_back(temp);
  }

  for (sVec i: array){
    for(string j: i){
      for(int len = j.length(); len < 12; len++ ){
        j += " ";
      }
      cout << j << " ";
    }
    cout << endl;
  }
  return 0;
}