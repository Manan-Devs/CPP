#include <iostream>
using namespace std;

int main() {
   int rows ; 
   cout << "Enter number of rows: ";
   cin >> rows;
   int val = rows;
   int num = rows;
     // upper half 
     for (int i = 1; i <= rows - 1; i++){
        // for spaces 
        for (int j = 1; j <= rows - val; j++){
            cout << " ";
        }
        val--;
        // for stars
         for (int k = 1; k <= num; k++){
           cout << " " << "*";
         }
         num--;
            
      cout << endl;
     }

     // lower half 
     int start = 1;
      for (int i = 1; i <= rows; i++){
         // for spaces 
       for (int j = 1; j <= rows - i; j++){
          cout << " ";
       }
       // for stars 
        for (int k = 1; k <= start; k++){
            cout << " " << "*";
        }
        start++;
      cout << endl;
      }
} 