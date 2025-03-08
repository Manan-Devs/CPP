// Assignment Operators
#include <iostream>

using namespace std ;
int main () {
    int teaBags; 
    cout << "Assign the no. of total bags you have";
    cin >> teaBags;
  
    if (teaBags < 20) {
      teaBags += 10;
      cout << "You have total " << teaBags;
    }
  
     else {
      cout << "You have total" << teaBags;
     }
     return 0;
  }
  