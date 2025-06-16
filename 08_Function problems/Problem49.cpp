#include <iostream>
using namespace std;

 void optimizedDivisor(int Num) {
    for (int i = 1; i * i <= Num; i++) {
        if (Num % i == 0) {
            cout << i << " ";              // First divisor
            if (i != Num / i) {
                cout << Num / i << " ";   // Paired divisor
            }
        }
    }
}

// 📘 Step-by-Step Explanation:
// 💡 Key Idea:
// Whenever i divides Num, then Num / i is also a divisor.

// 🎯 Example: Num = 36
// Loop till √36 = 6.

// i = 1 → 36 % 1 = 0 → Divisors: 1 and 36

// i = 2 → 36 % 2 = 0 → Divisors: 2 and 18

// i = 3 → 36 % 3 = 0 → Divisors: 3 and 12

// i = 4 → 36 % 4 = 0 → Divisors: 4 and 9

// i = 5 → Not a divisor

// i = 6 → 36 % 6 = 0 → Divisors: 6 and 6 → But we only print once!

// So we avoid printing same number twice:

// if (i != Num / i)  // to avoid duplicate when i * i == Num
    
    int main() {
    int Num;
    cout << "Enter your Num : ";
    cin >> Num;
    Divisor(Num);
    return 0;
}
