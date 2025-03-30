#include <iostream>
using namespace std;

int main() {
   int rows;
   cout << "Enter the no. of rows :";
   cin >> rows;
    int val = rows;
    int num = rows;
   for (int i = 0; i < rows; i++){

       for (int j = 0; j < rows - val; j++){
          cout << " ";
       }
       val--;

       
         for (int j = 0; j < num; j++){
           cout << "*";
         } 
         num--;

        cout << endl;
      }
      return 0;

   }



   