#include <iostream>
using namespace std;

int main() {
   int rows;
   cout << "Enter the no. of rows :";
   cin >> rows;
     for (int i = 1; i <= rows; i++){
        if (i % 2 == 0){
          for (int j = 1; j <= rows + 1; j++){
             if (j % 2 == 0){
                cout << "A";    
             }
            else  {
                cout << "B";
            }
          }
        }
        else  {
            for (int j = 1; j <= rows + 1; j++){
                if (j % 2 == 0){
                    cout << "B";
                }
              else {
                cout << "A";
              }
            }
        }
    cout << endl;
     }
}