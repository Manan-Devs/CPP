#include <iostream>
using namespace std;

int main() {
   int rows;
   cout << "Enter the no. of rows :";
   cin >> rows;
    int var = rows + (rows - 1);
      for (int i = 0; i < rows; i++){
          if (i == 1){
            for (int j = 1; j <= var; j++){
                  if (j % 2 == 0){
                   cout << " ";
                  }
               else {
                   cout << i;
               }
            }
          }

          else if (i < rows){
             for (int j = 1; j <= var; j++){
                 if (j == 1){
                   cout << i;
                 }
                 else if (j == var){
                    cout << rows;
                 }
                 else {
                  cout << " ";
                 }
              }
      }
         else  if (i == rows){
              cout << rows;
         }
      cout << endl;
  }
  var -= 2;
     return 0;
}