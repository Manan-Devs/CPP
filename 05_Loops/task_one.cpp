#include <iostream>

using namespace std;

int main(){
   int teaCups; 

   cout << "Enter the number of tea cups to serve" << endl;
   cin >> teaCups ;

    // while 

   while (teaCups > 0)
   {
    teaCups--;
     cout << "Serving a cup of tea \n" << teaCups << "remaining" << endl;

     
   }

   cout << "All tea cups are served" <<endl;
   


    return 0;
}