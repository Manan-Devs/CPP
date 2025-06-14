#include <iostream>
using namespace std;

int sumSquaresUptoNeven_Optimized(int N) {
    int k = N / 2;
    return 4 * (k * (k + 1) * (2 * k + 1)) / 6;
}


int main() {
    int N;
    cout << "Enter your N: ";
    cin >> N;
    cout << "Sum of squares of All Even Numbers Up to" << " " << N << " " << "are" <<  " " << sumSquaresUptoNeven(N);
    return 0;
}
