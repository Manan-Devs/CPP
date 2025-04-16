#include <iostream>
using namespace std;

int main() {
   int rows ; 
   cout << "Enter number of rows: ";
   cin >> rows;
    // upper half 
    for (int i = 1; i <= rows; i++){
       // for spaces 
       for (int j = 1; j <= rows - i; j++){
          cout << " ";
       }
      // for numbers 
       for (int j = 1; j <= 2 * i - 1; j++){
          if (j == 1 || j == 2 * i - 1){
             cout << 1;
          }
          else if (j <= i){
             cout << j;
          }
          else {
             cout << 2 * i - j;
          }
       }
      cout << endl;
    }
    // lower half
    int value = rows - 1;
    int val = rows - 1;
    // for spaces;
    for (int i = 1; i <= rows - 1; i++){
      // for spaces
        for (int j = 1; j <= rows - value; j++){
           cout << " ";
        }
        value--;
       
        // for numbers 

        for (int k = 1 ; k <= 2 * val - 1 ; k++){
         if (k == 1 || k == rows - 1){
           cout << 1;
         }
      // A . I give me solution for code below
      else if (k <= val) {
          cout << k;
      }
       else {
          cout << 2 * val - k;
       }
     }
     val--;
     cout << endl;
  }
} 