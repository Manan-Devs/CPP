#include <iostream>
using namespace std;

int main() {
   int rows ; 
   cout << "Enter number of rows: ";
   cin >> rows;
     char A = 65;
     char B = 66;

     // Alternate between two rows 
     for (int i = 1; i <= rows; i++){
       if (i % 2 == 0){
         for (int j = 1; j <= rows; j++){
            if  (j % 2 == 0){
               cout << A;
           } 
           else {
             cout << B;
           }
         }
       }
         else {
          for (int j = 1; j <= rows; j++){
            if  (j % 2 == 0){
               cout << B;
           } 
           else {
             cout << A;
           }
         }
         }
         cout << endl;
     }
     
}