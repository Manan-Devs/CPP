#include <iostream>

using namespace std ;

int main () {
  int teaBags;

  cout << "Enter the Tea Bags you have";
  cin >> teaBags;

  if (teaBags < 10) {
    // teaBags = teaBags + 5
    cout << " you have total" << " "  << teaBags += 5 << " " "Tea Bags" <<endl;
  }
  
   else {
     cout << "You have given number of teaBags "<<endl ;
   }
  
   
   return 0;
   
   
}