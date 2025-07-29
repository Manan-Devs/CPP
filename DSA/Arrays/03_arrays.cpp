#include <iostream>
using namespace std;


// function to find maximum element in 2-d Array
int getMax(int arr[][4] , int rows , int cols){
    int maxi = INT_MIN;
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++){
             if(arr[i][j] > maxi)
             maxi = arr[i][j]
        }
    }
  return maxi
}

// function to find minimum element in 2-d Array
int getMin(int arr[][4] , int rows , int cols){
    int mini = INT_MAX;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
             if(arr[i][j] < mini)
             mini = arr[i][j];
        }
    }
  return mini;



// function to print Transpose of matrix 
void Transpose(int arr[][4] , int rows , int cols , int transpose[][3]){
    for(int i = 0; i < rows; i++){
       for(int j = 0; j < cols; j++){
          // cout << arr[j][i] << " ";
          transpose[j][i] == arr[i][j];
          cout << arr[i][j] << " "; 
       }
     cout << endl;
    }
}

// function to find the key inside our array (Linear Search);
// bool findKey(int arr[][4] , int rows, int cols , int key){
//        for(int i = 0; i < rows; i++){
//           for(int j = 0; j < cols; j++){
//                if(arr[i][j] == key)
//                return true;
//           }
//        }
    
//   // value is not present 
//   return false;
// }

// function to print row wise sum
// void printRowWiseSum(int arr[][4] , int rows ,int cols){
//   for(int i = 0; i < rows; i++){
//      int sum = 0;
//      for(int j = 0; j < cols; j++){
//         sum+= arr[i][j];
//      }
//     cout << sum << " ";
//  } 
//  }

// function to print column - wise sum
// void printColumnWiseSum(int arr[][4] , int rows , int cols){
//      for (int i = 0; i < cols; i++){
//         int sum = 0;
//        for(int j = 0; j < rows; j++){
//           sum+= arr[j][i];
//        }
//       cout << sum << " ";
//      }
// }







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



  // cout << "printing row - wise sum" << endl;
  // printRowWiseSum(arr , rows , cols); 

  // cout << "printing column - wise sum" << endl;
  // printColumnWiseSum(arr , rows, cols);


  // int key = 12;
  
  // if (findKey(arr , rows , cols ,key))
  // cout << "true" << endl;
  // else 
  // cout << "false" << endl;


   // cout << "Maximum element in array: " << endl;
  // cout << getMax(arr , rows , cols) << endl;

  //  cout << "Minimum element in array: " << endl;
  //  cout << getMin(arr , rows , cols);


     int transpose[3][3];
   cout << "Transpose of matrix printing: "<< endl;
   Transpose(arr, rows, cols , transpose);


    // creation of 2d Vectors 
  // vector of vector 

  // vector<vector<int> > arr2d;

  // vector<int> a{1 , 2 ,3};
  // vector<int> b{2 , 4 , 6};
  // vector<int> c{1 , 3 , 7};

  // arr2d.push_back(a);
  // arr2d.push_back(b);
  // arr2d.push_back(c);

  // for(int i = 0; i < arr2d.size(); i++){
  //     for(int j = 0; j < arr2d[0].size(); j++){
  //       cout << arr2d[i][j] << " ";
  //     }
  //   cout << endl;
  // }

    int row = 3;
    int col = 5;

    vector<vector<int> > arr(row , vector<int>(col , 2025));

    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr[i].size(); j++){
            cout << arr[i][j] << " ";
        }
      cout << endl;
    }

  // homework of 2d vector 
  vector<vector<int> > arr2(5 , vector<int>(5 , -8));
  cout << arr2[2][3];
  cin >> arr2[2][3];
  return 0



 
}
