#include <iostream>
using namespace std;


// function to Generating a pattern of prime numbers 
 bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); i++ {
        if (num % i == 0) return false;
    }
    return true;
}

 void patternPrime(int rows) {
    for (int i = 1; i <= rows; i++) {
        int count = 0;
        int num = 2;  // starting from 2 (first prime)
        while (count < i) {
            if (isPrime(num)) {
                cout << num << " ";
                count++;
            }
            num++;
        }
        cout << endl;
    }
 }




int main() {
    int rows;
    cout << "Enter your rows no :";
    cin >> rows;
    patternPrime(rows);
    return 0;
}
