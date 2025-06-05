#include <iostream>
using namespace std;

 string ValidatngLeapYear(int Year){
      if (Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0){
         return "Leap Year";
      }
      return "Not Leap Year";
 }
   int main() {
    int Year;
    cout << "Enter a year: ";
    cin >> Year;
    cout << ValidatngLeapYear(Year) << endl;
    return 0;
}