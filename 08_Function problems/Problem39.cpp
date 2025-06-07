#include <iostream>
using namespace std;


 // function to find even numbers in a given range 
   int EvenNumbersInRange(int start , int end) {
      int sum = 0;
      for (int i = start; i <= end; i++) {
          if (i % 2 == 0) {
             sum+= i;
          }
      }
     return sum;
  }
    int main() {
    int start;
    int end;
    cout << "Enter the start value: ";
    cin >> start;
    cout << "Enter the end value: ";
    cin >> end;
    cout << "Sum of Even numbers in the range [" << start << ", " << end << "] are : " << endl;
    cout << EvenNumbersInRange(start,end);
    return 0;
}