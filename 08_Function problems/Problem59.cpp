#include <iostream>
using namespace std;

void numPyramid(int rows) {
    for(int i = 1; i <= rows; i++){
       for (int j = 1; j <= i; j++){
        cout << j << " ";
       }
       cout << endl;
    }
}

 int main() {
     int rows;
     cout << "Enter your rows: ";
     cin >> rows; 
     cout << "Your pyramid: " << endl;
     numPyramid(rows);
 }