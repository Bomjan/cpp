#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> iVec;
typedef vector<vector <int>> iMatrix;
typedef vector<double> dVec;
typedef vector<vector <double>> dMatrix;

int main (){

  int from = 1;
  int till = 8;

  for (int i = 1; i < 10; i++){

    for (int j = from; j <= till; j++){
      string line = to_string(j) + " x " + to_string(i) + " = " + to_string(i*j) + ", ";
      
      for (int l = line.length(); l < 14; l++){
        line += " ";
      }
      cout << line;
    }
    cout << endl;
  }

  return 0;
}