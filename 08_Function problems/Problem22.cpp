#include <iostream>
using namespace std;


// function to find about the count of digits greater than the 
// specific value in a number

int countGreaterDigits(int num , int value) {
     int count = 0;
     while(num > 0){
        if (num % 10 > value){
          count++;
        }
        num/= 10;
     }
     return count;
}
  int main() {
    int num;
    int value;
    cout << "Enter your num: ";
    cin >> num;
    cout << "Enter you value: ";
    cin >> value;
    cout << countGreaterDigits(num , value);
    return 0;
}