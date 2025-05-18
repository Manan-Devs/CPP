#include <iostream>
using namespace std;


// function to Calculating the sum of Series 
// Series : 1 + 1/2 + 1/3 + ... 1/n

float sumOfSeries(int n) {
    float sumOfSeries = 0;
     for (float i = 1; i <= n; i++){
        sumOfSeries+= 1/i;
     }
     return sumOfSeries;
}
 int main() {
    int n;
    cout << "Enter your n: ";
    cin>> n;
    cout << "Sum of series up to n: " << sumOfSeries(n) << endl;
    return 0;
}