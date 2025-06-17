#include <iostream>
using namespace std;

int DigitsInN(int N){
    int digits = 0;
    while(N > 0){
      N/= 10;
      digits++;
    }
    return digits;
}




int main() {
    int N;
    cout << "Enter your N: ";
    cin >> N;
    cout << DigitsInN(N);
    return 0;
}