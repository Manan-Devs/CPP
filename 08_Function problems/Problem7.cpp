#include <iostream>
using namespace std;

// optimized code 
void alternate01Matrix(int size) {
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            if ((i + j) % 2 == 0) cout << 0;
            else cout << 1;
        }
        cout << endl;
    }
}
int main() {
     int size;
     cout << "Enter your size of matrix : ";
     cin >> size;
     alternate01Matrix(size);
     return 0;
}
