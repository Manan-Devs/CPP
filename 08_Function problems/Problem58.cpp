#include <iostream>
using namespace std;

int sumDigits(int num) {
    if (num == 0) return 0;
    return (num % 9 == 0) ? 9 : (num % 9);
}

  
 int main() {
    int num;
    cout << "Enter your num: ";
    cin >> num;
    cout << sumDigits(num);
    return 0;
}