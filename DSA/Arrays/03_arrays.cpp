#include <iostream>
using namespace std;



// void printRowWiseSum(int arr[][3] , int rows ,int cols){
//   for(int i = 0; i < rows; i++){
//      int sum = 0;
//      for(int j = 0; j < cols; j++){
//         sum+= arr[i][j];
//      }
//     cout << sum << " ";
//  } 
//  }




  
 int main() {
//      // declare 2d array
//      int arr[3][3];

//      //intialisation
//     int brr[3][3] = {
//       {1 , 2 , 3},
//       {4 , 5 , 6},
//       {2 , 4 , 8}};
    
//   // row - wise accessing 
//    for(int i = 0; i < 3; i++){
//       for(int j = 0; j < 3; j++){
//          cout << brr[i][j] << " ";
//       }
//      cout << endl;
//    }
//    cout << "This is the row - wise printing" << endl;

//     // column - wise accessing 
//    for(int i = 0; i < 3; i++){
//       for(int j = 0; j < 3; j++){
//          cout << brr[j][i] << " ";
//       }
//      cout << endl;
//    }
//    cout << "This is the column - wise printing";
//    // cout << brr[2][2] << endl;


  int arr[5][4];
  int rows = 5;
  int cols = 4;


//    for(int i = 0; i < rows; i++){
//      for(int j = 0; j < cols; j++){
//          cin >> arr[i][j];
//       }
//  }

//    cout << "printing row - wise" << endl;
  
//    for(int i = 0; i < rows; i++){
//       for(int j = 0; j < cols; j++){
//          cout << arr[i][j] << " ";
//       }
//     cout << endl;
//    }

 // input hi column wise le liya hai to printing me i j se hi hogi thik hai 
//   for(int i = 0; i < rows; i++){
//      for(int j = 0; j < cols; j++){
//         cin >> arr[j][i];
//      }
// }

//   cout << "printing column - wise" << endl;
//   for(int i = 0; i < cols; i++){
//      for(int j = 0; j < rows; j++){
//         cout << arr[i][j] << " ";
//      }
//    cout << endl;
//   }


  // print row - sum
   
 // taking input from user to form 2d array
   for(int i = 0; i < rows; i++){
     for(int j = 0; j < cols; j++){
        cin >> arr[i][j];
   }
 }

  cout << "printing row sum of your input: ";
  for(int i = 0; i < rows; i++){
      int sum = 0;
    for(int j = 0; j < cols; j++){
        sum+= arr[i][j];
    }
      cout << sum << " ";
} 



 
}
