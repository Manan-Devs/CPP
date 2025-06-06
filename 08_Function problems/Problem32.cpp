#include <iostream>
using namespace std;

string checkPrime(int N) {
     for (int i = 2; i <= N; i++) {
          if (N % i == 0){
             return "Not Prime";
          }
          else {
            return "Prime";
          }
     } 
     return 0;
}
   
   int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;
    cout << checkPrime(N);
    return 0;
}