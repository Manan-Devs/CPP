#include <iostream>
using namespace std;

  int Factorial(int N){
      for (int i = N - 1; i > 0; i--){
         N*= i;
      }
     return N;
  }

   int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;
    cout << "Factorial of your number is: " << Factorial(N) << endl;
    return 0;
}