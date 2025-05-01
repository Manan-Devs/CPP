#include <iostream>
#include <string>

using namespace std;

int main () {
    string teaOrder; 

    cout << "Enter your tea Order" <<endl;
    getline (cin ,teaOrder);

    if (teaOrder == "Green tea"){
        cout << "You have ordered Green Tea" <<endl;
    }
    

}