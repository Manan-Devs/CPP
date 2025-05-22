#include <iostream>
using namespace std;

 // function for Palindromic Numbers in a range 
  void palindromeNums(int start , int end){
     for (int i = start; i <= end; i++){
        int original = i;
        int n = 0;
        while(original > 0) {
        n = n * 10 + original % 10; // reversed integer
        original = original / 10;
    }
       if (i == n) {
          cout << " " << i;
       }
     }
  }
  int main() {
    int start;
    int end;
    cout << "Enter your start value : " ;
    cin >> start;
    cout << "Enter your end value : " ;
    cin >> end;
    cout << "[";
    palindromeNums(start,end);
    cout << " " << "]";
    return 0;
}