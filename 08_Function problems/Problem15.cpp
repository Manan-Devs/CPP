#include <iostream>
using namespace std;

// function to check the no. of perfect numbers up to a Given limti 
 int perfectCheck(int limit){
      int count = 0;
    for (int i = 1; i <= limit; i++){
        int sum = 0;
        for (int j = i - 1; j > 0; j--){
             if (i % j == 0) {
                 sum+= j;
             }
        }
         if (sum == i){
             count++;
         }
    }
     return count;
 }

 // Optimized Code 
//  bool isPerfect(int num) {
//     int sum = 1;  // 1 is always a divisor (except for num = 1)
//     if (num == 1) return false;

//     for (int i = 2; i <= sqrt(num); i++) {
//         if (num % i == 0) {
//             sum += i;
//             int paired = num / i;
//             if (paired != i) sum += paired; // avoid adding square root twice
//         }
//     }

//     return sum == num;
// }

// int perfectCheck(int limit) {
//     int count = 0;
//     for (int i = 2; i <= limit; i++) {
//         if (isPerfect(i)) {
//             count++;
//         }
//     }
//     return count;
// }


int main() {
    int limit;
    cout << "Enter your limit : ";
    cin >> limit;
    cout << perfectCheck(limit);
    return 0;
}
