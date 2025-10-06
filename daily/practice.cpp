#include <iostream>
#include <vector>

using namespace std;
typedef vector<int> iVec;
typedef vector<vector <int>> iMatrix;


int main(){

  cout << "Number of rows: ";
  int x;
  cin >> x;

  cout << "Number of cols: ";
  int y;
  cin >> y;

  iMatrix data;
  for (int i = 0; i< x; i++){
    iVec row;
    for(int j = 0; j < y; j++){
      double temp;
      cout << "value at [" << i << "][" << j << "] : ";
      cin >> temp;
      row.push_back(temp);
    }
    data.push_back(row);
    
  }

  cout << "\nThe matrix is \n" << endl;
  for(iVec x: data){
    for(double y: x){
      cout << y << " ";
    }
    cout << endl;
  }

  iMatrix transposed;
  for (int i = 0; i < y; i++){
    iVec row;
    for (int j = 0; j < x; j++){
      row.push_back(data[j][i]);
    }
    transposed.push_back(row);
  }

  cout << "\nTransposed Matrix\n" << endl;
  for (iVec x: transposed){
    for(double y: x){
      cout << y << " ";
    }
    cout << endl;
  }
  cout << transposed.size() * transposed[0].size() << '\n';
  return 0;
}