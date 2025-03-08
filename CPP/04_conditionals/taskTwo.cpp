#include <iostream>
#include <string>

using namespace std;

int main () {
    int hour ;
   
    cout << "Enter the current hour (0 - 23)" <<endl;
    cin >> hour;
    
    if (hour >= 8 && hour <= 18) {
        cout << "shop is open";
    }
     else {
        cout << "shop is closed";
     }
   
    

}