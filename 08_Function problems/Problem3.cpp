#include <iostream>
using namespace std;


 // finding the sum of first N odd numbers 
    int sumOddtoN(int N) {
       return N * N;
    }

   int main() {
   int N;
   cout << "Enter the N:" ;
   cin >> N;
   cout << "Sum of first N odd numbers : " << sumOddtoN(N) << endl;

    return 0;
}
