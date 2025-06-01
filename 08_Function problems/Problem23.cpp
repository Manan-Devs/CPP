#include <iostream>
#include <random>
using namespace std;

// function to generate random number matrix
  void randomNumber(int rows , int columns) {
         random_device rd;
         mt19937 gen(rd());
         uniform_int_distribution<> dis(1 , 9);
    for (int i = 0; i < rows; i++){
       
        for (int j = 0; j < columns; j++){
          
            cout << dis(gen) << " ";
         }
    
         cout << endl;
    }
}
 int main() {
    int rows;
    int columns;
    cout << "Enter your rows: ";
    cin >> rows;
    cout << "Enter your columns: ";
    cin >> columns;
    randomNumber(rows , columns);
    return 0;
}