#include <iostream>
using namespace std;

 // function to generate prime numbers in a given range 
  int primeNumbersInRange(int start, int end) {
      bool checkPrime;
       for (int i = start; i < end - 1; i++) {
           for (int j = 2; j <= i / 2; j++) {
              if (i % j == 0) {
                 checkPrime = false;
                 break;
              }
              else {
                checkPrime = true;
              }
           }
            if (checkPrime == true) {
                 cout << i << " ";
              }
       }
  }

    int main() {
    int start, end;
    cout << "Enter the start and end of the range: ";
    cin >> start >> end;
    cout << "Prime numbers in the range [" << start << ", " << end << "] are: " << endl;
    cout << primeNumbersInRange(start, end);
    return 0;
}