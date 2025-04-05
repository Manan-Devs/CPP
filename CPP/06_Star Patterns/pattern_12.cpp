#include <iostream>
#include <vector>
using namespace std;

int main() {
   int rows;
   cout << "Enter the no. of rows:";
   cin >> rows;
        for (int i = 1; i <= rows; i++){
         int value = 1;
        // for spaces
            for (int j = 1; j <= (rows - i); j++){
                cout << " ";
             }
        // for numbers 
        for (int k = 1; k <= i ; k++){
            cout << value << " ";
            value = value * (i - k) / k; // AI - powered Solution
    }
         cout << endl;
    }
         

        return 0;  
}
    
          
  