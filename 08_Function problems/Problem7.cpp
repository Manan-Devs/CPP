#include <iostream>
using namespace std;

void alternate01Matrix(int size) {
     for (int i = 1; i <= size; i++) {
        if (i % 2 != 0) {
             for (int j = 1; j <= size; j++) {
                 if (j % 2 != 0) {
                     cout << 0;
                 }
                else {
                     cout << 1;
                }
             }
          cout << endl;
        }
        else {
            for (int j = 1; j <= size; j++) {
             if (j % 2 != 0) {
                cout << 1;
             }
            else {
                cout << 0;
            }
        }
       cout << endl;
    }
     
}
}
int main() {
     int size;
     cout << "Enter your size of matrix : ";
     cin >> size;
     alternate01Matrix(size);
     return 0;
}