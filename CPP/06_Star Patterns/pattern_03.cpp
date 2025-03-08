#include <iostream>
using namespace std;

int main() {
   int rows ;
   cout << "Enter the no. of rows :";
   cin >> rows;
        int start = 1;
      for (int i = 1; i <= rows; i++){
          start+= 2;
        for (int j = 1; j <= start; j++){
           if (j == 1){
             cout << "    ";
           }
          else if (j == start) {
              cout << "    ";
          }
          else  {
             cout << "*" ;
          }
        }
       cout << "\n";
      }

      

	 }
	  




	  
       
      
      
    
    
  
