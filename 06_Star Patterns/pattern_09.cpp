#include <iostream>
using namespace std;

int main() {
   int rows ;
   cout << "Enter the no. of rows:";
   cin >> rows;
    int start = 1;
   for (int i = 1; i <= rows ; i++){
       for (int j = 1; j <= i; j++) {
          cout << start++  ;  
   }
   cout << "\n";

    
}
}