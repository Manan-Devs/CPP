#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// function to find first repeated element in array using hashing
int findDuplicates(int size, const vector<int>& arr) {
    unordered_map<int, int> hash;
    for(int i = 0; i < size; i++) {
        hash[arr[i]]++;
        if(hash[arr[i]] == 2) {
            return arr[i]; // return the first repeated element
        }
    }
    return -1; // no duplicate found
}

int main () {
    int size;
    cout << "Enter the size of your array: ";
    cin >> size;
    vector<int> arr;
    cout << "Enter elements of your array: ";
    for(int i = 0; i < size; i++) {
        int value;
        cin >> value;
        arr.push_back(value);
    }
    cout << "Your first repeated element in your array is: " << findDuplicates(size, arr) << endl;

}



