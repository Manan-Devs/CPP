#include <iostream>
using namespace std;

 // algorithm to calculate GCD of two numbers
 // euclidean algorithm
 int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
  // function to calculate the LCM of two numbers a and b
  // math formula used for calculating the LCM 
  long long  LCM (int a , int b){
     int g = gcd(a,b);
     long long lcm = (1LL * a * b) / g;  // Prevent overflow ✅
     if (a <= 0 || b <= 0){
       return 0;
     }
     return lcm;
  }

  

  int main() {
    int a;
    int b;
    cout << "Enter value of a : ";
    cin >> a;
    cout << "Enter value of b : ";
    cin >> b;
    cout << LCM(a,b);
    return 0;
}