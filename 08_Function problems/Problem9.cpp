#include <iostream>
using namespace std;

 void multiplicationMatrix(int size) {
     for (int i = 1; i <= size; i++) {
         for (int j = 1; j <= size; j++) {
             cout << " " << i * j;
         }
       cout << endl;
     
 }



int main() {
     int size;
     cout << "Enter your size : ";
     cin >> size;
     multiplicationMatrix(size);
     return 0;
}
