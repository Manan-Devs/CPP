#include <iostream>
using namespace std;

int main() {
   int rows;
   cout << "Enter the no. of rows :";
   cin >> rows;
      for (int i = 1; i <= rows; i++){
        int evenRow = 4 * i;
        int oddRow =  4 * (i - 1) + 1;
        // for first row 
         if (i == 1){
          for (int j = 1; j <= 4; j++){
             cout << " " << j;
          }
         }
         // for even rows 
         else if (i % 2 == 0){
          for (int j = 1; j <= 4; j++){
            cout << " " << evenRow--;
          }
         }
         // for odd rows 
         else  {
           for (int j = 1; j <= 4; j++){
             cout << " " << oddRow++;
           }
         }
         
       cout << endl;
  }
   return 0;
}
