#include <iostream>
using namespace std;

 
 void FibonacciSeries(int limit){
      int a = 0 , b = 1;
      while(a < limit) {
        cout << a  << " ";
         int next = a + b;
         a = b;
         b = next;
      }
 }
    
    int main() {
    int limit;
    cout << "Enter your limit: ";
    cin >> limit;
    cout << "All fibonacci numbers less than " << limit << " are: " << endl;
    cout << "[ ";
    FibonacciSeries(limit);
    cout << "]";
    return 0;
}