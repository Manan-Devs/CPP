#include <iostream>
using namespace std;

  int SumOddInRange(int start, int end){
      int sum = 0;
       for (int i = start; i < end; i++){
           if (i % 2 != 0){
              sum+= i;
           }
       }
   return sum;
  }


  int main() {
    int start, end;
    cout << "Enter the start and end of the range : ";
    cin >> start >> end;
    cout << SumOddInRange(start,end);
    return 0;
}