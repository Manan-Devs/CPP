#include <iostream>
using namespace std;

int main() {
   int rows;
   cout << "Enter the no. of rows:";
   cin >> rows;
    // upper half 
    for (int i = 1; i <= rows; i++){
      int val = i + 1;
      int num = 2 * i - 2;
      // for spaces
         for (int j = 1; j <= (rows - i); j++){
            cout << " ";
         }
      
         // for numbers
        for (int k = 1; k <= 2 * i - 1; k++){
            if (k == 1 || k == 2 * i - 1){
               cout << i;
            }
            else if (k > 1 && k <= i){
                cout << val++;
            }
           else  {
              cout << num--;
           }
        } 
          
         
         
          
         cout << "\n";
   }     
         
         
            
         return 0;  
         }
         
    
      





