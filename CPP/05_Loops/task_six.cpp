#include <iostream>

using namespace std;

int main(){
    string teaTypes[5] = {"Orange Tea" ,"Oolong Tea" , "Green tea" , "Lemon tea " , 
        "Black tea"};
      for (int i = 0; i < 5; i++){
        cout << "Brewing " << teaTypes[i] <<  "..." <<endl;

        for ( int j = 1 ;  j <= 3 ;     j++) {
            cout << "Brewing " << j << " " <<  "cup of " << teaTypes[i] << endl; 
        }
      }
    
    
      return 0;
}