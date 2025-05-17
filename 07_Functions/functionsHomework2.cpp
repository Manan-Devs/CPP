#include <iostream>
#include <string>
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
      }
        // function to set the ith bit of a binary number from Msb to Lsb
       // set your ith bit according to binary bit-indexing;
         int setIthBit(int N , int i) {
           int binary = binaryNum(N);
           string binStr = to_string(binary);
           if (binStr[i] == '0') {
              binStr[i] = '1';
           }
          //... modify binStr ...
          int newBinary = stoi(binStr);
          return newBinary;
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
      int N;
      cout << "Enter your decimal number : " << endl;
      cin >> N;
      int i;
      cout << "Set your ith bit : " << endl;
      cin >> i;
      cout << "Your binary number is : " << setIthBit(N , i) << endl;
      cout << setIthBit(N , i) << endl;
      return 0;
     
}
