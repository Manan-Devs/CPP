#include <iostream>
using namespace std;


// function to Generating a pattern of prime numbers 
 void patternPrime(int rows){
    bool checkPrime;
     for (int i = 1; i <= rows; i++){
        int count = 1;
         for (int j = 2; count <= i; j++){
             for (int k = j - 1; k > 1; k--) {
                 if (j % k != 0){
                     checkPrime = true;
                 }
                 else {
                    checkPrime = false;
                    break;
                 }
             }
              if (checkPrime == true) {
                 cout << j << " ";
                 count++;
              }
             
         }
      cout << endl;
     }
 }




int main() {
    int rows;
    cout << "Enter your rows no :";
    cin >> rows;
    patternPrime(rows);
    return 0;
}