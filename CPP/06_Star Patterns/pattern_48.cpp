#include <iostream>
using namespace std;

int main() {
   int rows;
   cout << "Enter the no. of rows :";
   cin >> rows;
      for (int i = 1; i <= rows; i++){
        int evenRow = rows * i;
        int oddRow =  rows * (i - 1) + 1;
        // for first row 
         if (i == 1){
          for (int j = 1; j <= rows; j++){
             cout << " " << j;
          }
         }
         // for even rows 
         else if (i % 2 == 0){
          for (int j = 1; j <= rows; j++){
            cout << " " << evenRow--;
          }
         }
         // for odd rows 
         else  {
           for (int j = 1; j <= rows; j++){
             cout << " " << oddRow++;
           }
         }
         
       cout << endl;
  }
   return 0;
}