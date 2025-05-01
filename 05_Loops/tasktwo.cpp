#include <iostream>

using namespace std;

int main(){
   string response ;
   
    do
    {
        cout << "Do you want more tea ? (yes / no)" << endl;
        getline(cin , response);
    } while (response != "no" || response != "No");
    
   


    return 0;
}