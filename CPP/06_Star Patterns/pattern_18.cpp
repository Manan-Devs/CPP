#include <iostream>
using namespace std;

int main() {

    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;
       for (int i = 1; i <= rows; i++){
          if (i == 1 || i == rows){
             for (int j = 1; j <= rows; j++){
               cout << j;
             }
          }
          else {
            for (int j = 1; j <= rows; j++){
               if (j == 1 || j == rows){
                cout << 1;
               }
              else {
                cout << " ";
              }
            }
          }
        cout << endl;
       }
   
        
}