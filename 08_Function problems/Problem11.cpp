#include <iostream>
using namespace std;

// function to generate pattern of increasing numbers 

 void increasingNumbers(int rows) {
     for (int i = 1; i <= rows; i++){
         for (int j = 1; j <= i; j++){
            if (j == 1){
                 cout << 1;
            }
            else {
                cout << j;
            }
         }
         cout << endl;
     }

 }




int main() {
    int rows;
    cout << "Enter the no. of rows: ";
    cin >> rows;
    increasingNumbers(rows);
    return 0;
}