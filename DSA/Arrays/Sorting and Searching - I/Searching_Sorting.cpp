#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



// Binary Search Code 
int binarySearch(int arr[] , int size , int target)
     int start = 0
     int end = size - 

     int mid = (start + end) / 2;
    
     while(start <= end){
         int element = arr[mid];

         if (element == target){
             return mid;
         }

         else if (target < element){
             // search in left
             end = mid - 1;
         }
         
         else {
             // search in right
             start = mid + 1;
         }
        
         mid = (start + end) / 2;
     }
     // element not found 
     return -1;
}



int main() {
    int arr[] = {2 , 4, 6 ,8 , 10 , 12 , 16};
    int size = 7;
    int target = 20;

    int indexOftarget = binarySearch(arr , size , target);

    if (indexOftarget == -1){
         cout << "target not found"<< endl;
    }
     else {
         cout << "target found at " << indexOftarget << endl;
     }

    vector <int> v{1 , 2 ,3 ,4 ,5};

    if (binary_Search(v.begin() , v.end() , 30)){
         cout << "Found" << endl;
    }

    else {
         cout << "Not Found" << endl;
    }

    
   return 0;


}







