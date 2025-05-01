#include <iostream>
#include <string>

using namespace std ;

int main () {
    string eligibility;
    int teaCups;
     cout << "Enter your status : ";
     cin >> eligibility ;
     cout << "Enter tea cups : ";
     cin >> teaCups;
    if (eligibility == "Student" || teaCups >= 15 ) {
        cout << "You are eligible for subscription discount price";
    
    }
    else {
         cout << "Sorry , you are not eligible";
    }
    return 0;
   
   
}