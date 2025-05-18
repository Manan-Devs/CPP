#include <iostream>
using namespace std;


// function to find out the sum of digits of until number becomes zero
 int sumOfDigits(int num) {
    int sum = 0;
     for (int i = num; i > 0; i = i/10){
       sum+= i % 10;
     }
     return sum;
 }


int main() {
    int num;
    cout << "Enter your number" << endl;
    cin >> num;
    cout << "Sum of digits of your number: " << sumOfDigits(num) << endl; 
    return 0;
}
