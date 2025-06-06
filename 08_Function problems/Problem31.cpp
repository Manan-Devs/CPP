#include <iostream>
using namespace std;

  // function to check if the given number is Even or Odd 
   string EvenOdd(int N) {
       if (N % 2 == 0){
          return "Even";
       }
       return "Odd";
   }
    
    int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;
    cout<< EvenOdd(N);
    return 0;
}