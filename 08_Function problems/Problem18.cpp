#include <iostream>
using namespace std;


 // Optimized Code 
   // function for Palindromic Numbers in a range 
  void palindromeNums(int start , in end){
    // Check for valid input range first 
    if (start < 0 || end < 0 || start > end || start == end || start > 1000000 || end > 1000000) {
        cout << "Invalid Input" << endl;
        cout << "Please enter a valid range between 0 and 1000000." << endl;
        return;
    }

   // Check for palindromic numbers in the range 
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
