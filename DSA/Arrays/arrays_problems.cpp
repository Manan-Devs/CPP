#include <iostream>
using namespace std;

//   // function to insert element at a given position
//   int count = 0;
//   void insertion(int n , int pos , int x){
//      //creation of array
//       int arr[n];
//       //taking elements of the array
//       for(int i = 0; i < n; i++){
//          cin >> arr[i];
//          count++;
//       }
//       if (count != n){
//          cout << "Please enter no. of elements match with the size of the array." << endl;
//        }
//          //insertion loop
//           for(int i = n - 1; i > pos; i--){
//               arr[i] = arr[i - 1]; // shifting elements to the right
//               arr[pos] = x; // inserting the element at the specified position
//         }
//         //  printing loop
//             for(int i = 0; i < n; i++){
//               cout << arr[i] << " "; // printing the array after insertion
//             }
//     }

//     int main() {
//     int n;
//     int x;
//     int pos;
//     cout << "enter your size: ";
//     cin>> n;
//     cout << "enter your element to add in array: ";
//     cin >> x;
//     cout << "enter your position for insertion: ";
//     cin >> pos;
//      //checking all edgeCases 
//        if(n <= 0 || n >= 1000000 || n == 1 || pos <= 0 || pos >= n || pos == n-1 || x < 0 || x >= 1000000){
//         cout << "Invalid input. Please ensure that all inputs are within the valid range." << endl;
//            return 0; // Exit the program here 
//         }
//       cout << "Enter elements of your array: ";
//       insertion(n , pos , x);
//       return 0;
// }
          
   
 
//   // function to delete element at a given index 
//   int deleteElement(int n , int delIndex) {
//      if (n <= 0 || delIndex < 0 || delIndex >= n) {
//         cout << "Invalid input." << endl;
//         return 0;
//     }
//      int arr[n];
//     for(int i = 0; i < n; i++){
//        cin >> arr[i];
//      }
//        for(int i = delIndex; i < n - 1; i++){
//          arr[i] = arr[i + 1]; // shifting elements to the left
//        } 
      
//      for(int i = 0; i < n - 1; i++){
//          cout << arr[i] << " ";
//       }
//     }
 
//  int main() {
//      int n;
//      int delIndex;
//      cout << "Enter the size of the array: ";
//      cin >> n;
//      cout << "Enter the delIndex: ";
//      cin >> delIndex;
//      cout << "Enter the elements of the array: ";
//      deleteElement(n , delIndex);
//      return 0;
//  }

// function to check if a number array is sorted or not 
 bool isSorted(int arr [] , int n){
       if (n <= 0 || n >= 1000000 || !n){
          cout << "Invalid input." << endl;
          return false; // exit the function if input is invalid 
       }
      for(int i = 0; i < n - 1; i++){
          if (arr[i] > arr[i + 1]){
             return false; 
          }
          if (arr[i] == arr[i + 1]){
             continue; // if two elements are equal , continue iteration by step 1
          }
      }
     return true;
 }


 int main() {
     int n;
     cout << "Enter the size of the array: ";
     cin >> n;
     int arr[n];
     cout << "Enter the elements of the array: ";
     if (sizeof(arr) == 0){
        cout << "Array is empty." << endl;
     }
     for(int i = 0; i < n; i++){
       cin >> arr[i];
     }
     
     if (isSorted(arr , n)){
        cout << "The array is sorted." << endl;
     }
     else {
       cout << "The array is not sorted." << endl;
     }
     return 0;
 }





