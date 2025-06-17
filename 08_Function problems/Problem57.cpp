#include <iostream>
using namespace std;

 int TriangularN(int N){
     int num = N * (N+1) / 2;
     return num;
 }



  int main() {
    int N;
    cout << "Enter your N: ";
    cin >> N;
    cout << TriangularN(N);
    return 0;
}