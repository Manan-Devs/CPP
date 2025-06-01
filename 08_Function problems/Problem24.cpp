#include <iostream>
#include <random>
using namespace std;

// function to generate random number matrix
  void randomNumber(int size) {
         random_device rd;
         mt19937 gen(rd());
         uniform_int_distribution<> dis(1 , 9);
    for (int i = 0; i < size; i++){
    
        for (int j = 0; j < size; j++){
          
            cout << dis(gen) << " ";
         }
    
         cout << endl;
    }
}
 int main() {
    int size;
    cout << "Enter your size: ";
    cin >> size;
    randomNumber(size);
    return 0;
}