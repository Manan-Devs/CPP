#include <iostream>
using namespace std;

 // function to generate square matrix of given size 
 void squareMatrix(int size){
     int count = 1;
     for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
             cout << count++ << " ";
        }
        cout << endl;
     }
 }
    int main() {
    int size;
    cout << "Enter your size: ";
    cin >> size;
    squareMatrix(size);
    return 0;
}