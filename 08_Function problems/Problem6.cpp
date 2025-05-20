#include <iostream>
#include <string>
using namespace std;

// Generating Right-Angle Triangle Pattern of Numbers 
 
 string rightTriangle(int row) {
     for (int i = 1; i <= row; i++){
         for (int j = 1; j <= i; j++){
             cout << j;
         }
        cout << endl;
     }
     return to_string(row);
 }





int main() {
    int N;
    cout << "Enter the no. of rows of right-angle Triangle you wants to print: ";
    cin >> N;
    cout << "Your right-angled Triangle for your rows : " << rightTriangle(N);
    return 0;
}