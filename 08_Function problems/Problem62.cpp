#include <iostream>
#include <cmath>
using namespace std;

 // function to diamond printing of stars
  void printDiamond(int size){
       // upper half
       for(int i = 0; i <= size/2; i++){
        // for spaces
        for (int j = 0; j < size - i; j++) {
             cout << " ";
        }
         // for stars
        for(int k = 0; k < 2 * i - 1; k++){
              cout << "*";
          }
        cout << endl;
       }
      
     // lower half
      int value = size - 1;
      for(int m = 0; m <= size - 1; m++){
          // for spaces 
          for(int j = 0; j < size - value; j++){
             cout << " ";
          }
          // for stars 
          for(int k = 0; k < 2 * value - 1; k++){
             cout << "*";
          }
          value--;
        cout << endl;
      }
      
  }

    int main() {
    int size;
    cout << "Enter your size : ";
    cin >> size;
    printDiamond(size);
    return 0;
}