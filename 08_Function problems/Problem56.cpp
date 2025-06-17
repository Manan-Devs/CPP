#include <iostream>
using namespace std;

 int FibonacciAtSpecificPosition(int position){
     int a = 0;
     int b = 1;
      while(position > 0){
        int next = a + b;
         a = b;
         b = next;
         position--;
      }
      return a;
}


 

 int main() {
    int position;
    cout << "Enter your position: ";
    cin >> position;
    cout << FibonacciAtSpecificPosition(position);
    return 0;
}