#include <iostream>
using namespace std;


  string checkPalindromeString(string str) {
       string reversedStr = "";
    for (int i = str.length() - 1; i >= 0; i--) {
           reversedStr+= str[i];
    }
      if (reversedStr == str) {
          return "Palindrome";
      }
      else {
        return "Not a Palindrome";
      }
    return 0;
  }
 


  int main() {
    string str;
    cout << "Enter your string: ";
    getline(cin , str);
    cout << "Your given string is: " << checkPalindromeString(str);
    return 0;
}