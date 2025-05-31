#include <iostream>
#include <string>
using namespace std;

 // function to generate multiplication table for given range of numbers 
  void multiplicationTable(int start , int end){
       for (int i = 1; i <= end; i++){
          for (int j = start; j <= end; j++){
               cout << "   " <<  to_string(j) << " " << "*" << " " << to_string(i) << " " << "=" <<   " " << j * i;
          }
        cout << endl;
       }
  }

  int main() {
    int start;
    int end;
    cout << "Enter your start value:";
    cin >> start;
    cout << "Enter your end value:";
    cin >> end;
    multiplicationTable(start , end);
    return 0;
}