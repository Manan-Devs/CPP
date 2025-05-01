// Arithmetic Operators

#include <iostream>

using namespace std ;

int main () {
  int teaPacks;
  double pricePerTeapacks;
  cout << "Enters the no. of teaPacks you want :";
  cin >> teaPacks;
   cout << "Enter the price per teapacks :";
   cin >> pricePerTeapacks;
   double totalPrice = teaPacks * pricePerTeapacks;
   double taxOnPrice = (totalPrice * 10)/100;
   double FinalCost = totalPrice + taxOnPrice;
   cout << "Your discounted final cost is :" << " " << FinalCost;
   return 0;
}






