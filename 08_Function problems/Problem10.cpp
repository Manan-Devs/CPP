#include <iostream>
using namespace std;

 // function to generating a Triangle pattern of stars with a given height 

  void triangle(int height) {
     for (int i = 1; i <= height; i++){
         for (int j = 1; j <= i; j++){
             cout << "*";
         }
        cout << endl;
     }
  }


int main() {
    int height;
    cout << "Enter your height of Triangle pattern: ";
    cin >> height;
    triangle(height);
    return 0;
}