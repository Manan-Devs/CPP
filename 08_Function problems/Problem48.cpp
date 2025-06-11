#include <iostream>
#include <cmath>
using namespace std;

 // function to check if a numbers is perfect squares 
 string perfectSquares(int number){
    int root = sqrt(number);
    if(root * root == number){
         return "True";
    }
    return "False";
 }

   int main() {
    int number;
    cout << "Enter your number : ";
    cin >> number;
    cout << perfectSquares(number);
    return 0;
}