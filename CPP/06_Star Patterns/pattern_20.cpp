#include <iostream>
using namespace std;

int main() {

    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;
     for (int i = 1; i <= rows; i++){
      if (i == 1 || i == rows) {
         for (int j = 1; j <= 3; j++){
            cout << "*";
         }
      }
      else  {
         for (int j = 1; j <= 3; j++){
            if (j == 3){
               cout << "*";
            }
           else {
            cout << " ";
           }
         }
      }
      cout << endl;
     }
     
    
    
   
    return 0;
}
   
        
