#include <iostream>
using namespace std;

int main() {
   int rows;
   cout << "Enter the no. of rows :";
   cin >> rows;
   char n = 65;
    for (int i = 1; i <= rows; i++){
      for (int j = 1; j <= i;  j++){
        cout << n++;
      }
     cout << endl;
    }
     
}