#include <iostream>
#include <string>
using namespace std;

// Generating Right-Angle Triangle Pattern of Numbers 
 
 void rightTriangle(int row) {
     for (int i = 1; i <= row; i++){
         for (int j = 1; j <= i; j++){
             cout << j;
         }
        cout << endl;
     }
 }
  int main() {
    int N;
    cout << "Enter the no. of rows of right-angle Triangle you wants to print: ";
    cin >> N;
   rightTriangle(N);
    return 0;
}
