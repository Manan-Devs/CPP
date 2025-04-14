#include <iostream>
using namespace std;

int main() {
   int rows ; 
   cout << "Enter number of rows: ";
   cin >> rows;
   int val = rows - 1;
   int num = 1;
    // for upper half 
    for (int i = 1; i <= rows; i++){
       // for spaces 
       for (int j = 0; j < rows - i; j++){
        cout << " ";
       }
       // for stars 
       for (int k = 0; k < 2 * i - 1; k++) {
         cout << "*";
       }
       cout << endl;
    }
     
    // for lower half 

    for (int i = 1; i <= rows - 1; i++){
       // for spaces 

       for (int j = 1; j <= 2 * i - num; j++){
        cout << " ";
       }
       num++ ;

       // for stars 
      for (int k = 1; k <= 2 * val - 1; k++){
         cout << "*";
      }
      val--;
      cout << endl;
    }
    
     
      return 0;
    }

   