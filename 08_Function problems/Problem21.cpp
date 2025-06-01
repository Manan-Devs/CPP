#include <iostream>
using namespace std;

// function to create a diagonal matrix 

void diagonalMatrix(int size) {
      for (int i = 1; i <= size; i++){
         for (int j = 0; j < size; j++){
             if (j < i){
                 cout << 1;
             }
             else {
                cout << 0;
             }
      }
      cout << endl;
      }
}




int main() {
    int size;
    cout << "Enter the size of matrix: ";
    cin >> size;
    diagonalMatrix(size);
    return 0;
}