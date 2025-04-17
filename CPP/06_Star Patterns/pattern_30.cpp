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
        // for stars 
      for (int k = 1; k <= 2 * i - 1; k++){
         cout << "*";
      }
    cout << endl;
     }
     int val = rows - 1;
     int value = rows - 1;
     // lower half
     for (int i = 1; i <= rows - 1; i++){
        // for spaces 
        for (int j = 1; j <= rows - val; j++){
          cout << " ";
        }
        val--;
        // for stars 
        for (int k = 1; k <= 2 * value - 1; k++){
            cout << "*";
        }
        value--;
        cout << endl;
     
     }
   
}
