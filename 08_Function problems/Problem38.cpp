#include <iostream>
using namespace std;

 
  // function to find out the numbers is perfect
  string checkPerfect(int N) {
     int sum = 0;
     for (int i = 1; i <= N / 2; i++) {
         if (N % i == 0) {
             sum+= i;
         }
     } 
       if (sum == N){
        return "Perfect Number";
       }
       else if (N == 1){
         return "Not Perfect Number";
       }
       else if (N > 10^6) {
          return "Too large Number";
       }
       else if (N < 0){
         return "Negative Number ignored";
       }
     return "";
  }
    int main() {
    int N;
    cout << "Enter value of N: ";
    cin >> N;
    cout << checkPerfect(N) << endl;
    return 0;
}
