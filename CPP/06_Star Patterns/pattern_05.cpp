#include <iostream>
using namespace std;

int main() {

    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;
       
    for (int i = 1; i <= rows; i++){
       if (i == 1){
         for (int j = 1; j <= rows; j++){
             cout << "*";
         }
       }
       else if (i == rows){
          for (int j = 1; j <= rows; j++){
           cout << "*";
          }
       }
        else  {
            for (int j = 1; j <= rows; j++){
             if (j == 1 || j == rows){
                  cout << "*";
             }
             else {
              cout << " ";
             }
            }
        }
        cout << "\n";
    }
        
}
    

