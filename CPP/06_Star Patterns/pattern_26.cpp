#include <iostream>
using namespace std;

int main() {
   int rows ; 
   cout << "Enter number of rows: ";
   cin >> rows;
    char n = 65;
    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= 2 * i - 1; j++){
            if (j == 1 || j == 2 * i - 1){
              cout << n;
            }
           else {
             cout << " ";
           }
        }
        n++;
        cout << endl;
    }
     
}