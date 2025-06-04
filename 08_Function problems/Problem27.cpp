#include <iostream>
#include <string>
using namespace std;

  int StrWordCount(string str){
     int count = 0;
     for (int i = 0; i < str.length(); i++){
         if (str[i] == ' ' ){
             count++;
         }
        else if (str[i] == '\'' || str[i] == ',' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == ';' || str[i] == ':'){
               continue;
         }
     }
     return count;
  }
    int main() {
    string str;
    cout << "Enter your string: ";
    getline(cin , str);
    cout << StrWordCount(str) + 1;
    return 0;
}
