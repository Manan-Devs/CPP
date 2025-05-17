#include <iostream>
#include <string>
#include <cmath>
using namespace std;
 
    // function to convert decimal to binary
    int binaryNum(int N) {
      int binaryN = 0; 
      int place = 1;
        while (N > 0) {
       // binary integer creation
         binaryN = N % 2 * place + binaryN;
           N  = N / 2;
           place = place * 10;
        }
        return binaryN;
    }
     // to count the number of bits in binary number
      int countBits(int binaryN) {
        int digitCount = 0;
          while (binaryN > 0) {
           digitCount++;
           binaryN = binaryN / 10;
          }
       return digitCount;
      }
  // function to set the ith bit of a binary number from Lsb to Msb;
// A.I assisted
🟨string setIthBit(int N , int i) {🟨
🟨    int binary = binaryNum(N);🟨
🟨    string binStr = to_string(binary);🟨
🟨    if (binary > 0) {🟨
🟨        if (binStr[binStr.length() - 1 - i] == '0') {🟨
🟨            binStr[binStr.length() - 1 - i] = '1';🟨
🟨        }🟨
🟨    }🟨
🟨    return binStr;🟨
🟨}🟨
     int reverseInteger(int num) {
    int n = 0;
    while(num > 0) {
        n = n * 10 + num % 10;
        num = num / 10;
    }
    return n;
}
        
   // function to convert celsius to fahrenheit
    int celsiusToFahrenheit(int celsius) {
        int fahrenheit = (celsius * 9 / 5) + 32;
        return fahrenheit;
   }


    int main() {
     //int num;
     //cout << "Enter your integer : " << endl;
     //cin >> num;
     //cout << "Your reversed integer is : " << reverseInteger(num) << endl;
    
     //int celsius;
     //cout << "Enter your temperature in celsius : " << endl;
     //cin >> celsius;
     //cout << "Your given temperature in fahrenheit : " << celsiusToFahrenheit(celsius) << endl;
    
      // int N;
      // cout << "Enter your decimal number : " << endl;
      // cin >> N;
      // int i;
      // cout << "Set your ith bit : " << endl;
      // cin >> i;
      // cout << "Your binary number is : " << setIthBit(N , i) << endl;

      int num;
      cout << "Enter your num to reverse it :" << endl;
      cin >> num;
      cout << "Your reversed integer is : " << reverseInteger(num) << endl;
      
      return 0;
}
