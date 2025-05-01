#include <iostream>

using namespace std ;

int main () {
  int cups;
  double pricePerCup , totalPrice , discountedPrice;

   cout << "Enter the number of tea cups: ";
   cin >> cups;
   cout << "Enter the price per cups :";
   cin >> pricePerCup;

   totalPrice = cups * pricePerCup;

   // apply 5% discount if price is above 100

   if (totalPrice > 100) {
        discountedPrice = totalPrice - (totalPrice * 0.05);
        cout << "Your total Bill is  : " << discountedPrice <<endl;
   } 
    else { 
         cout << "Your Total Bill is " << totalPrice << endl;
     }
   
   return 0;
}







