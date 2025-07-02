#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

 // function to unite both arrays 
   void unionArrays(vector<int> Union , int n1 , int n2){
     int A[n1];
     int B[n2];
     cout << "Enter elements of array A: ";
     for(int i = 0; i < n1; i++){
         cin >> A[i];
     }
     cout << "Enter elements of array B: ";
     for(int i = 0; i < n2; i++){
         cin >> B[i];
     }

     for(int i = 0; i < n1; i++){
        Union.push_back(A[i]); // push elements of A into vector Union
     }

     for(int i = 0; i < n2; i++){
        Union.push_back(B[i]); // push elements of B into vector Union
     }

     cout << "Union of both arrays is: " << endl;
     for(int i = 0; i < n1 + n2; i++){
        cout << Union[i] << " ";
     }
  }



  
  int main() {
     // Dynamic Array (Vector)
    
    // //create vector
    // vector<int> arr;
    // int ans = (sizeof(arr)/sizeof(int));
    // // cout << ans << endl; //0

    // // cout << arr.size() << endl; //0
    // // cout << arr.capacity() << endl; //0

    // //insert 
    // arr.push_back(5);
    // arr.push_back(6);

    //  //print 
    // //  for(int i = 0; i < arr.size(); i++){
    // //      cout << arr[i] << " ";     
    // // }

    // // remove or delete element
    // arr.pop_back(); //remove the last elment

    //  //print 
    // //  for(int i = 0; i < arr.size(); i++){
    // //      cout << arr[i] << " ";     
    // // } 

    // // int n;
    // // cout << "Enter the value of n " << endl;
    // // cin >> n;
    // // create a vector of size n
    // vector<int> brr(n , -2008);

    // // cout << "Size of b " << brr.size() << endl; //10
    // cout << "Capacity of b " << brr.capacity() << endl; // 10
    // cout << "Size of b " << sizeof(brr) << endl; 
    
    //  for(int i = 0; i < brr.size(); i++){
    //      cout << brr[i] << " ";
    //  }
    // cout << endl;

    // cout << "Printing values of crr" << endl;
    // // create a vector with initial values
    // vector <int> crr{10 , 20  ,30 ,40 ,50};

    // for(int i = 0; i < crr.size(); i++){
    //      cout << crr[i] << " ";
    // }
    // cout << endl;

    // cout << "Vector crr is Empty or not " << crr.empty() << endl; // 0 (fasle)
    
    // vector <int> drr;
    // cout << "Vector drr is Empty or not " << drr.empty() << endl; // 1 (true)

     
    
    vector<int> elements;
    

    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter elements of array: ";

       for(int i = 0; i < n; i++){
       int value;
       cin >> value;
       elements.push_bac(value); // push each element into an array
  }
    for(int i = 0; i < n; i++){
        int count = std::count(elements.begin(), elements.end(), elements[i]);
        if (count == 1){
          cout << elements[i] << " is unique" << endl;
        }
    }
 

    
    
    
    
    
    
    
    return 0;
}
