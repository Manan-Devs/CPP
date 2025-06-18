#include <iostream>
using namespace std;


string CountSpecific(string num, string digit) {
    int counter = 0;
    for(int i = 0; i < num.length(); i++) {
        if (num[i] == digit[0]) {
            counter++;
        }
    }
    return to_string(counter);
}
   int main() {
    string num;
    string digit;
    cout << "Enter your num: ";
    cin >> num;
    cout << "Enter your specific digit: ";
    cin >> digit;
    cout << "Count of Specific Digits in Your Num: " << CountSpecific(num,digit);
    return 0;
}