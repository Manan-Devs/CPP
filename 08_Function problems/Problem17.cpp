#include <iostream>
using namespace std;

 // function to check the perfect squares in a range 
 void checkPerfectSquares(int start, int end){
    for (int i = start; i <= end; i++){
       if (i * i < end){
         cout << " " << i * i;
      }
  }
 }
  



int main() {
    int start;
    int end;
    cout << "Enter your start value : " ;
    cin >> start;
    cout << "Entery your end value : " ;
    cin >> end;
    cout << "[";
    checkPerfectSquares(start , end);
    cout << " " << "]";
    return 0;
}