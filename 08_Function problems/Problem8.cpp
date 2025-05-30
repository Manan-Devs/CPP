#include <iostream>
using namespace std;

// function to find the sum of the first N Even numbers 
  int firstN_evenSum(int N ) {
    int sum = 0;
       for (int i = 2; i <= 2 * N; i = i + 2){
          sum = sum + i;
       }
    return sum;
 }





int main() {
    int size;
    cout << "Enter your size: ";
    cin >> size;
    diamondPattern(size);
    return 0;
}
