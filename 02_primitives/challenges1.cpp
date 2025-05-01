#include <iostream>
#include <string>

using namespace std ;

int main () {
    string typeOfTea;
    float pricePerTea = 20"$";
    char rating = 'B'

    getline(cin , typeOfTea , pricePerTea , rating);

    // asks for such information related to your order of tea 

   cout << "Which type of tea cwould you like to drink today?" <<endl;
   cin >> typeOfTea >>endl;
   cout << "So now your" << typeOfTea << "ready at just" << pricePerTea "which has rating of" <<rating  <<endl; 
   
   
   return 0;
   
   
}