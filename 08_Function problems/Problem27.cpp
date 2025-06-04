#include <iostream>
#include <string>
using namespace std;

  int NoWordsStr(string str){
     int count = 0;
     for (int i = 0; i < str.length(); i++){
         if (str[i] == ' ' ){
             count++;
         }
     }
     return count;
  }
    int main() {
    string str;
    cout << "Enter your string: ";
    getline(cin , str);
    cout << NoWordsStr(str) + 1;
    return 0;
}