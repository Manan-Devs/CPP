#include <iostream>
using namespace std;

int main() {
   int rows;
   cout << "Enter the no. of rows:";
   cin >> rows;
        for (int i = 1;  i <= rows; i++){
           if (i % 2 == 0){
             for (int j = 1; j <= rows; j++){
               if (j % 2 == 0){
                 cout << 0;
               }
               else {
                 cout << 1;
               }
             }
           }
           else {
            for (int j = 1; j <= rows; j++){
                if (j % 2 == 0){
                  cout << 1;
                }
                else {
                  cout << 0;
                }
              }
           }
          cout << endl;
        }
    
          return 0;  
   }     
         
         
            
         
 
         