#include <iostream>
using namespace std;

void diagonalMatrix(int size) {
     if (size <= 0 || size > 10^6 || size < -10^6){
         cout << "Invalid size. Please enter a size between -10^6 and 10^6." << endl;
     }

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
