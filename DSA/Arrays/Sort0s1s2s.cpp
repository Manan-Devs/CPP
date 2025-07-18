#include <iostream>
#include <climits>
#include <vector>
using namespace std;



int main() {
 vector <int> arr{2,1,1,1,0,0,0,0};
  
int start = 0;
int middle = (arr.size()/2) - 1;
int end = arr.size() - 1;

for(int i = 0; i < arr.size(); i++){
    if (arr[i] == 0){
       arr[i] = arr[start];
       start++;
    }
    else if (arr[i] == 1){
       arr[i] == arr[middle];
       middle++;
    }
    else if (arr[i] == 2){
       arr[i] == arr[end];
       end--;
    
}




  for(int i = 0; i < arr.size(); i++){
     cout << arr[i] << " ";
  }

}

