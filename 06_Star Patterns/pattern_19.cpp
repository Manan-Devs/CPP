#include <iostream>
using namespace std;

int main() {

    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;
    char n = 65 + (rows - 1);
    int start = rows;
    int value = rows;
     for (int i = 1; i <= rows; i++){
        // for spaces 
      for (int j = 1; j <= rows - start; j++){
         cout << " ";
      }
      start--;
      // for numbers 
       for (int k = 1; k <= value; k++) {
         cout << n;
    }
        n--;
       value--;
      cout << endl;
     }
   
        
}