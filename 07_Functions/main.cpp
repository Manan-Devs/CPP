#include <iostream>
using namespace std;

/*void printName() {
     // function to print name
      int n; 
    //cout << "Enter the value of n " << endl;

    cin >> n;
    for (int i = 0; i < n; i++){
        // cout << "Manan" <<endl;
    }  
}

void printNumber(int num){
    //cout << num << endl;
}

 add function 
int  add(int a , int b) {
    int result = a + b;
    //return result;
}
*/

// maxNumber function 
  int findMax(int num1 , int num2 , int num3) {
       if (num1 > num2 && num1 > num3){
         return num1;
       }
       else if (num2 > num1 && num2 > num3){
         return num2;
       }
       else {
         return num3;
       }
  }
  // n is parametr (Declaration)
  void printCounting(int n){
     for (int i = 1; i <= n; i++){
         cout << i << " ";
     }
      cout << endl;
  }

  // getGrade function
   char getGrade (int marks){
    /* if (marks >= 90) {
        return 'A';
     }
     else if (marks >= 80){
        return 'B';
     }
     else if (marks >= 70) {
        return 'C';
     }
      else if (marks >= 60) {
        return  'D';
      }
      else {
        return  'E';
      }
    */
    // Switch case
    // assuming marks is between 0 to 100
     switch (marks/10)
     {
       case 10 : return 'A' ; break;
       case 9 : return 'A' ; break;
       case 8 : return 'B' ; break;
       case 7 : return 'C' ; break;
       case 6 : return 'D' ; break;
       default : return 'E';
   }
}

  int getEvenSum(int n){
     int sum = 0;
     for (int i = 2; i <= n; i = i + 2){
          sum = sum + i;
        
 }
     return sum;
  }

   int main() {

     /* function call

    printName();
     int a = 5;
     cout << "Address of this a is :" << &a  << endl;
    printNumber(a);
    int a;
    cout << "Enter the value of a " << endl;
    cin >> a;
    int b; 
    //cout << "Enter the value of b" << endl;
    cin >> b;


    int sum = add (a , b);

   // cout << "Addition result is : " << sum << endl;
   return 0;
 */
    // find max of 3 numbers 
     
    /* int a , b, c ;
     cout << "Enter the value of a , b and c"  <<endl;
     cin >> a  >> b >> c;
     int maxNumber = findMax(a, b, c);
     cout << maxNumber << endl;
     return 0;

*/

 /* int n ;
 cout << "Enter the value of n" << endl;
 cin >> n;
 // n is argument (Calling)
 printCounting(n);
 return 0;
 */ 
   int marks;
    //cout << "Enter the marks" <<endl;
    //cin >> marks;
    
    //char finalGrade = getGrade(marks);
    //cout << "Your final grade is " << finalGrade <<endl;

    /* for (int i = 0; i <= 100; i++){
        char ans = getGrade(i);
        cout << "Grade for marks" << i << " is " << ans << endl;
    }
*/
   int n ;
   cout << "Enter the value of n" << endl;
   cin >> n;

   int ans = getEvenSum(n); 
   cout << "Sum up to " << n << " even numbers " << ans << endl;
    return 0;



   }
   

