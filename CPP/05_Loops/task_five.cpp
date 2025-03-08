#include <iostream>

using namespace std;

int main(){
   string teaTypes[5] = {"Orange Tea" ,"Oolong Tea" , "Green tea" , "Lemon tea " , "Black tea"};
   
      for (int  i = 0; i < 6; i++ )
      {
        if (teaTypes[i] == "Green tea") {
            cout << "Skipping the " << teaTypes[i] << endl;
             continue;
        }
         
        cout << "Brewing" << " " << teaTypes[i] << "..." <<endl;
      }
      

    return 0;
}