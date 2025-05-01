#include <iostream>
using namespace std;

int main() {
   int rows;
   cout << "Enter the no. of rows :";
   cin >> rows;
       for (int i = 1; i <= rows; i++){
        int value = 2 * i - 2;
        int val = i + 1;
        
        
         // for spaces
         for (int j = 1; j <= (rows - i); j++){
            cout << "  ";
         }
        
            // for numbers 
        for (int k = 1; k <= 2 * i - 1; k++){
             if (k == 1 || k == 2 * i - 1){
                cout << " " << i;
             }
             else if (k <= i){
               cout << " " <<  val++;
             }
             else {
               cout << " " << value--;
             }
        }
    cout << endl;
       }

      return 0;
}