#include <iostream>
using namespace std;

int main() {
   int rows ; 
   cout << "Enter number of rows: ";
   cin >> rows;
    char n = 65;   
    for (int i = 1; i <= rows; i++){
        // for spaces
        for (int j = 1; j <= rows - i; j++){
            cout << " ";
        }
       // for characters
       for (int j = 1; j <= 2 * i - 1; j++){
          cout << n++;
       }
     cout << endl;
    } 
     
}