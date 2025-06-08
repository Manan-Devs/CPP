#include <iostream>
using namespace std;

 // function to generate pattern of numbers 
  void numPattern(int rows){
     int counter = 1;
     for (int i = 0; i < rows; i++){
         for (int j = 0; j <= i; j++){
             cout << " " << counter++;
         }
        cout << endl;
     }
  }
   
    int main() {
    int rows;
    cout << "Enter your rows: ";
    cin >> rows;
    numPattern(rows);
    return 0;
}