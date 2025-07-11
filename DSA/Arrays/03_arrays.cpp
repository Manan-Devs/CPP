#include <iostream>
using namespace std;


int main() {
     // declare 2d array
     int arr[3][3]

     //intialisation
    int brr[3][3] = {
      {1 , 2 , 3},
      {4 , 5 , 6},
      {2 , 4 , 8}};
    
  // row - wise accessing 
   for(int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++){
         cout << brr[i][j] << " ";
      }
     cout << endl;
   }
   cout << "This is the row - wise printing";
   
   
   
   
   
      
   // cout << brr[2][2] << endl;
}
