
#include <iostream>
#include <vector>
using namespace std






int main() {
  int rows;
  int cols;
  cout << "Enter your rows: ";
  cin >> rows;
  cout << "Enter your cols:";
  cin >> cols;

 // creation of 2d array
  int arr[rows][cols];

  cout << "Enter elements of your array: ";
  // taking elements of 2d array
  for(int i = 0; i < rows; i++){
      for(int j = 0; j < cols; j++){
         cin >> arr[i][j];
      }
  }
      cout << "Your rotating matrix by 90 degrees" << endl;
     for(int a = 0; a < cols; a++){
       for(int i = rows - 1; i >= 0; i--){
          cout << "It's not correct output";
      }
       cols++;
     }
      
}


