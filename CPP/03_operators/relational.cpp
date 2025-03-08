// relationalOperators 

#include <iostream>

using namespace std ;

int main () {
  int cups; 
  int years;
  cout << "Enter your cups:";
  cin >> cups; 
  cout << "Enter your no. of years in joining";
    cin >> years;
  if (cups > 12 || years > 1 ) {
      cout << "you are qualifies for a discount";
  }
   else {
     cout << "You are not qualifies for a discount";
   }
  
   
   return 0;
   
   
}