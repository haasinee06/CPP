#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0, original, remainder;

    cout << "Enter a number: ";
    cin >> num;

    original = num; 

    while (num != 0) {
        remainder = num % 10;                 
        reversed = reversed * 10 + remainder;
        num /= 10;                           
    }

    if (original == reversed) {
        cout << "Palindrome Number" << endl;
    } else {
        cout << "Not a Palindrome Number" << endl;
    }

    return 0;
}

