#include <iostream>
#include <string>
using namespace std ;

int main () {
  string userTea;
  int teaQuantity;

  cout << "What would like to order in tea ?" "\n";
  getline(cin, userTea);

  // ask for quantity 
   cout << "how many cups " << userTea <<"Would you like to have ?";
   cin >> teaQuantity;
    
   cout  << teaQuantity ;
   cout << userTea;
   return 0 ;
}