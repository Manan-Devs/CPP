#include <iostream>
using namespace std;

int GCD(int a, int b){
     int GCD;
    for (int i = 1; i < a || i < b; i++){
          if (a % i == 0 && b % i == 0){
             GCD = i;
          }
    }
     return GCD;
}
  int main() {
    int a;
    int b;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << GCD(a , b);
    return 0;
}