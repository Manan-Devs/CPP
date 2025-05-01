#include <iostream>
using namespace std;

int main() {
   int rows ; 
   cout << "Enter number of rows: ";
   cin >> rows;
    for (int i = 1; i <= rows; i++){
       if (i % 2 == 0){
         for (int j = 1; j <= rows; j++){
             if (j % 2 == 0){
             cout << "X";
             }
             else {
                cout << "O";
             }
         }
       }
        else {
            for (int j = 1; j <= rows; j++){
                if (j % 2 == 0){
                    cout << "O";
                }
                else {
                    cout << "X";
                }
            }
        }
    cout << endl;
    }
    
}