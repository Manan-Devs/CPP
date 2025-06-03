#include <iostream>
using namespace std;


// function to generate matrix of Fibonacci numbers 
 void fibonacciMatrix(int rows){
     int a = 0 , b = 1;
     int count = 0;
     for (int i = 0; i < rows; i++){ 
        for (int j = 0; j < rows; j++){
           cout << a << " ";
           int next = a + b;
           a = b;
           b = next;
           count++;
 }
       cout << endl;
    }
}
 int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
   fibonacciMatrix(rows);
    return 0;
}