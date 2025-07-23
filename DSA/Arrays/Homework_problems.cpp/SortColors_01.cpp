#include <iostream>
#include <vector>
using namespace std;




// function to generate an sorted array
 void SortArr(int n , int arr[]) {
   int low = 0;
   int mid = 0;
   int high = n - 1;
   
   while(mid <= high){
    // if any element given is negative 
       if (arr[low] == 0){
        swap(arr[low],arr[mid]);
        mid++;
        low++;
      }
      else if (arr[mid] == 1){
         mid++;
      }
      else { // arr[mid] == 2
         swap(arr[mid] , arr[high]);
         high--;
      }
   }
     for(int i = 0; i < n; i++){
      cout << arr[i] << " ";
   }
 }



int main() {
 int n;
 cout << "Enter the size of arr: ";
 cin >> n;
 int arr[n];

 cout << "Enter elements of array: ";
 for(int i = 0; i < n; i++) {
    cin >> arr[i];
}

 cout << "Your Sorted Array: " << endl;
 SortArr(n , arr);

// My Approach 
//    vector <int> arr{2, 1,0,1,2,0,0,1,2};
//   
//   int low = 0;
//   int mid = 0;
//   int high = arr.size() - 1;


//   for(int i = 0; mid <= high; i++){
//       if (arr[i] == 0){
//          arr[i] = arr[low];
//          mid++;
//       }
//       else if (arr[i] == 1){
//          arr[i] = arr[mid];
//          mid++;
//       }
//       else if (arr[i] == 2){
//          arr[i] = arr[high];
//          high--;
//       }
//   }
//    


//    for(int i = 0; i < arr.size(); i++){
//       cout << arr[i] << " ";
//    } 

// Not uses swap function to swap values in unsorted array or 
// not used correct tracker element like mid used i which is not right tracker element 
}

