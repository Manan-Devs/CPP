#include <iostream>
using namespace std;

 // function to find out the all divisors of number 
  void Divisor(int Num){
     for(int i = 1; i <= Num; i++){
          if (Num % i == 0){
             cout << i << " ";
          }
     } 
  }
    
    int main() {
    int Num;
    cout << "Enter your Num : ";
    cin >> Num;
    Divisor(Num);
    return 0;
}