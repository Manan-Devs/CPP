#include <iostream>
#include <cmath>
#include <typeinfo>
using namespace std;

 // function to check the perfect squares in a range 
 void checkPerfectSquares(int start, int end){
       for(int index = start; index < end; index++){
           int squareRoot = sqrt(index*index);
           if (typeid(squareRoot) == typeid(int)) {
               cout << index * index << " ";
           }
         }
 }


 //  void checkPerfectSquares(int start, int end) {
//     int s = ceil(sqrt(start));   // starting square root
//     int e = floor(sqrt(end));    // ending square root

//     for (int i = s; i <= e; i++) {
//         cout << i * i << " ";
//     }
// }

// root n (start) se root n (end) tak ke perfect squares print karne hain 
// Time complexity : O(sqrt(n));


  int main() {
    int start;
    int end;
    cout << "Enter your start value : " ;
    cin >> start;
    cout << "Enter your end value : " ;
    cin >> end;
    cout << "[";
    checkPerfectSquares(start , end);
    cout << " " << "]";
    return 0;
}
