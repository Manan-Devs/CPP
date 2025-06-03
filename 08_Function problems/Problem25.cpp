#include <iostream>
using namespace std;

// function to find the sum of N fibonacci numbers
int fibonacciSum(int N){
   int count = 0;
   int sum = 0;
   int a = 0 ,  b = 1;
   while(count < N){
     sum+= a;
     int next = a + b;
     a = b;
     b = next;
     count++;
   }
   return sum;
}
   int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;
    cout << fibonacciSum(N) << " ";
    return 0;
}