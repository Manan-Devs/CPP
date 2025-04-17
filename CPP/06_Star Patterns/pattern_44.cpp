#include <iostream>
using namespace std;

int main() {
   int rows;
   cout << "Enter the no. of rows :";
   cin >> rows;
   int n = 1;
    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= rows; j++){
            cout << n++;
        }
      cout << endl;
    }
     
}