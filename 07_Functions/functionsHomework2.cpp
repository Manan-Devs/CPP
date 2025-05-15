#include <iostream>
using namespace std;
 
 // function to reverse an integer 
   int count = 0;
  int reverseInteger(int num) {
      
  }

  // function to convert celsius to fahrenheit

   int celsiusToFahrenheit(int celsius) {
        int fahrenheit = (celsius * 9 / 5) + 32;
        return fahrenheit;
   }









  int main() {
     int num;
     //cout << "Enter your integer : " << endl;
     //cin >> num;
     //cout << "Your reversed integer is : " << reverseInteger(num) << endl;
    
     int celsius;
     cout << "Enter your temperature in celsius : " << endl;
     cin >> celsius;
     cout << "Your given temperature in fahrenheit : " << celsiusToFahrenheit(celsius) << endl;
    
    
    
    
    
    
     return 0;
}