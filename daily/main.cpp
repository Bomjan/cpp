#include <iostream>
#include <cmath>
#include <vector>

typedef std::vector<int> ivec;

using str = std::string;
using namespace std;

int main(){
  
  int row = 8;


  ivec arr = {};
  for (int i = 0; i < 3; i++){
    double num;
    cout << "Enter numbers ";
    cin >> num;
    arr.push_back(num);
  }

  for (int x: arr){ cout << x << " ";}
  return 0;
}

  // for (int i = 0; i<row; i++){
  //   for (int j = 0; j < i; j++){
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // for (int i = row; i > 0; i--){
  //   for (int j = 0; j < i; j++){
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // for (int i = 0; i < row; i++){
  //   for (int j = 0; j < (row - i); j++){
  //     cout << "  ";
  //   }
  //   for (int k = 0; k < i; k++){
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // for (int i = row; i > 0; i--){
  //   for(int j = 0; j < (row - i); j++){
  //     cout << "  ";
  //   }
  //   for (int k = 0; k < i; k++){
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // for (int i = 0; i < row*2; i++){
  //   int n = abs(row - i);
  //   for (int j = 0; j < n; j++){
  //     cout << "  ";
  //   }
  //   for (int k = 0; k < (row - n)*2 -1; k++){
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // for (int i = 0; i < 10; i++){
  //   for (int j = 0; j < 10; j++){
  //     bool condition1 = i == 0 || j == 0 || i == 9 || j == 9 || i == 5 || i == 4;
  //     str m = condition1 ? "* ":"  ";
  //     cout << m ;
  //   }
  //   cout << endl;
  // }