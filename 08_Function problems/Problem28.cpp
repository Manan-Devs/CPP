#include <iostream>
using namespace std;

int  sumSquaresUptoNeven(int N) {
     int sum = 0;
     for (int i = 2; i <= N; i = i + 2) {
         sum = sum + (i*i);
     }
     return sum;
}
   int main() {
    int N;
    cout << "Enter your N: ";
    cin >> N;
    cout << "Sum of squares of All Even Numbers Up to" << " " << N << " " << "are" <<  " " << sumSquaresUptoNeven(N);
    return 0;
}