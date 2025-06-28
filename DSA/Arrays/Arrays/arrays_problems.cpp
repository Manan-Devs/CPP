#include <iostream>
using namespace std;

//  function to insert element at a given position
  void insertion(int n , int pos , int x){
     //creation of array
      int arr[n];
      //taking elements of the array
      for(int i = 0; i < n; i++){
         cin >> arr[i];
      }
        //insertion loop
            for(int i = 0; i < n; i++){
                if(i == pos)
               arr[i] = x; // inserting the element at the given position
               cout << arr[i] << " "; // printing the array after insertion
            }
    }

    int main() {
    int n;
    int x;
    int pos;
    cout << "enter your size: ";
    cin>> n;
    cout << "enter your element to add in array: ";
    cin >> x;
    cout << "enter your position for insertion: ";
    cin >> pos;
     //checking all edgeCases 
       if(n <= 0 || n >= 1000000 || n == 1 || pos <= 0 || pos >= n || pos == n-1 || x < 0 || x >= 1000000){
           cout << "Invalid input. Please ensure that all inputs are within the valid range." << endl;
        return 0; // Exit the program here 
        }
      cout << "Enter elements of your array: ";
     insertion(n , pos , x);
    return 0;
}
          
   
 
//  int main() {
//      int arr[5] = {2 ,4 ,5 ,6 ,7};
//      int delIndex;
//      cout << "Enter the delIndex: ";
//      cin >> delIndex;
//      for(int i = delIndex; i > 0; i--){
//          arr[i] = arr[i - 1]; // shifting elements to the left
//         //  cout << arr[i] << " "; // printing the array after shifting 

//      } 
      
//      for(int i = 0; i < 3; i++){
//           cout << arr[i] << " ";
//      }
//  }