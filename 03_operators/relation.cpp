#include <iostream>
#include <string>

using namespace std ;

int main () {
    int cups;
   cout << "Enter the no. of cups ";
    cin >> cups;
    if (cups > 20) {
        cout << "You got Gold Badge" <<endl;
    }
    else if (cups >= 10 && cups <= 20) {
          cout << "You got Silver Badge" <<endl;
    }
    return 0;
   
   
}