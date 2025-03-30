#include <iostream>
using namespace std;

int main() {
   int rows ;
   cout << "Enter the no. of rows :";
   cin >> rows;
   // upper half 
   for (int i = 1; i <= rows; i++){
      for (int j = 1; j <= (rows - i); j++){
         cout << " ";
      }
      for (int k = 1; k <= 2 * i - 1; k++){
           cout << "*";
      }
      cout << "\n";
    
 }
   // lower half 
   int value = rows - 1;
   int val = rows - 1;
   for (int i = 1; i <= rows - 1; i++){
       for (int j = 0; j < rows - value; j++){
          cout << " ";
       }
       value--;
      
      for (int k = 1; k <= 2 * val - 1; k++){
          cout << "*";
      }  
        val--;
      
      
      cout  << "\n";
   }
    
      


      
        
}

    

 
  

  
      
   


  

    

     
      
       
      
