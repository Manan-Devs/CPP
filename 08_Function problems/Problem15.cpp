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



int main() {
    int limit;
    cout << "Enter your limit : ";
    cin >> limit;
    cout << perfectCheck(limit);
    return 0;
}